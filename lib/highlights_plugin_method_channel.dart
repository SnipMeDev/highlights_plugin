import 'dart:convert';

import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';
import 'package:highlights_plugin/highlights_interface.dart';
import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';
import 'package:highlights_plugin/method_index.dart' as index;
import 'package:collection/collection.dart';

import 'highlights_plugin_platform_interface.dart';

/// An implementation of [HighlightsPluginPlatform] that uses method channels.
class MethodChannelHighlightsPlugin extends HighlightsPluginPlatform
    implements HighlightsInterface {
  MethodChannelHighlightsPlugin({required this.debug});

  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('highlights_plugin');

  final bool debug;

  List<String>? _cachedLanguages;
  List<String>? _cachedThemes;

  @override
  Future<List<CodeHighlight>> getHighlights(
    String code,
    String language,
    String theme,
    List<PhraseLocation> emphasisLocations,
  ) async {
    final arguments = {
      "code": code,
      "language": (await _getLanguage(language)),
      "theme": (await _getTheme(theme)),
      "emphasisLocations": emphasisLocations,
    };

    final json = await methodChannel.invokeMethod(
      index.getHighlights,
      arguments,
    );

    final data = jsonDecode(json);

    if (data is List) {
      return data.map((e) => CodeHighlight.fromJson(e)).toList();
    } else {
      _debugPrint(
        '${index.getHighlights}: Expected List but got ${data.runtimeType}',
      );
      return [];
    }
  }

  @override
  Future<List<String>> getLanguages() async {
    if (_cachedLanguages != null) return _cachedLanguages!;

    final result = await methodChannel.invokeMethod(index.getLanguages);

    if (result is List) {
      final output = result.map((data) => data.toString()).toList();
      _cachedLanguages = output;
      return output;
    } else {
      _debugPrint(
        '${index.getLanguages}: Expected List but got ${result.runtimeType}',
      );
      return [];
    }
  }

  @override
  Future<List<String>> getThemes() async {
    if (_cachedThemes != null) return _cachedThemes!;

    final result = await methodChannel.invokeMethod(index.getThemes);

    if (result is List) {
      final output = result.map((e) => e.toString()).toList();
      _cachedThemes = output;
      return output;
    } else {
      _debugPrint(
        '${index.getThemes}: Expected List but got ${result.runtimeType}',
      );
      return [];
    }
  }

  @override
  Future<void> useDarkMode(bool useDarkMode) async {
    await methodChannel.invokeMethod(index.useDarkMode, useDarkMode);
  }

  Future<String> _getLanguage(String expected) async {
    final data = _cachedLanguages ?? (await getLanguages());
    final result = data.getMatching(expected);
    return result ?? data.first;
  }

  Future<String> _getTheme(String expected) async {
    final data = _cachedThemes ?? (await getThemes());
    final result = data.getMatching(expected);
    return result ?? data.first;
  }

  void _debugPrint(String message) {
    if (debug) {
      print(message);
    }
  }
}

extension on List<String> {
  String? getMatching(String expected) => map((item) => item.toLowerCase())
      .firstWhereOrNull((element) => element == expected.toLowerCase());
}

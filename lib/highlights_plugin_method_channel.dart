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
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('highlights_plugin');

  List<String>? _languages;
  List<String>? _themes;

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

    return jsonDecode(json)
        .map<CodeHighlight>((data) => CodeHighlight.fromJson(data))
        .toList();

    // return [
    //   for (final item in result)
    //     CodeHighlight(
    //       item['phrase'],
    //       item['location'],
    //       item['isEmphasized'],
    //     ),
    // ;
  }

  @override
  Future<List<String>> getLanguages() async {
    if (_languages != null) return _languages!;

    final result = await methodChannel.invokeMethod(index.getLanguages);

    if (result is List) {
      final output = result.map((data) => data.toString()).toList();
      _languages = output;
      return output;
    } else {
      print(
        '${index.getLanguages}: Expected List but got ${result.runtimeType}',
      );
      return [];
    }
  }

  @override
  Future<List<String>> getThemes() async {
    if (_themes != null) return _themes!;

    final result = await methodChannel.invokeMethod(index.getThemes);

    if (result is List) {
      final output = result.map((e) => e.toString()).toList();
      _themes = output;
      return output;
    } else {
      print('${index.getThemes}: Expected List but got ${result.runtimeType}');
      return [];
    }
  }

  Future<String> _getLanguage(String expected) async {
    final data = _languages ?? (await getLanguages());
    final result = data.getMatching(expected);
    return result ?? data.first;
  }

  Future<String> _getTheme(String expected) async {
    final data = _themes ?? (await getThemes());
    final result = data.getMatching(expected);
    return result ?? data.first;
  }
}

extension on List<String> {
  String? getMatching(String expected) => map((item) => item.toLowerCase())
      .firstWhereOrNull((element) => element == expected.toLowerCase());
}

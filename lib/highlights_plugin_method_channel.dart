import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';
import 'package:highlights_plugin/highlights_interface.dart';
import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';
import 'package:highlights_plugin/method_index.dart' as index;

import 'highlights_plugin_platform_interface.dart';

/// An implementation of [HighlightsPluginPlatform] that uses method channels.
class MethodChannelHighlightsPlugin extends HighlightsPluginPlatform implements HighlightsInterface {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('highlights_plugin');

  @override
  Future<List<CodeHighlight>> getHighlights(
      String code,
      String language,
      String theme,
      List<PhraseLocation> emphasisLocations,
      ) async {
    final result = await methodChannel.invokeMethod(index.getHighlights);
    // TODO Complete
    return [];
  }

  @override
  Future<List<String>> getLanguages() async {
    final result = await methodChannel.invokeMethod(index.getLanguages);

    if (result is List) {
      return result.map((e) => e.toString()).toList();
    } else {
      print('getLanguages: Expected List but got ${result.runtimeType}');
      return [];
    }
  }

  @override
  Future<List<String>> getThemes() async {
    final result = await methodChannel.invokeMethod(index.getThemes);

    if (result is List) {
      return result.map((e) => e.toString()).toList();
    } else {
      print('getLanguages: Expected List but got ${result.runtimeType}');
      return [];
    }
  }
}

import 'package:flutter/cupertino.dart';
import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';
import 'package:highlights_plugin/method_index.dart' as methods;
import 'highlights_interface.dart';
import 'highlights_plugin_platform_interface.dart';

class HighlightsPlugin implements HighlightsInterface {
  HighlightsPlugin({this.debug = false}) {
    // Setup before first `instance` getter call
    HighlightsPluginPlatform.debug = debug;
  }

  final bool debug;

  @override
  Future<List<CodeHighlight>> getHighlights(
    String code,
    String? language,
    String? theme,
    List<PhraseLocation>? emphasisLocations,
  ) async {
    try {
      return await HighlightsPluginPlatform.instance.getHighlights(
        code,
        language,
        theme,
        emphasisLocations,
      );
    } catch (e, st) {
      _printDebugInfo(methods.getHighlights, e, st);
      return [];
    }
  }

  @override
  Future<List<String>> getLanguages() async {
    try {
      return await HighlightsPluginPlatform.instance.getLanguages();
    } catch (e, st) {
      _printDebugInfo(methods.getLanguages, e, st);
      return [];
    }
  }

  @override
  Future<List<String>> getThemes() async {
    try {
      return await HighlightsPluginPlatform.instance.getThemes();
    } catch (e, st) {
      _printDebugInfo(methods.getThemes, e, st);
      return [];
    }
  }

  @override
  Future<void> setDarkMode(bool useDarkMode) {
    try {
      return HighlightsPluginPlatform.instance.setDarkMode(useDarkMode);
    } catch (e, st) {
      _printDebugInfo(methods.setDarkMode, e, st);
      return Future.value();
    }
  }

  void _printDebugInfo(String method, Object error, StackTrace stackTrace) {
    if (debug) {
      print('HighlightsPlugin $method error: $error');
      debugPrintStack(stackTrace: stackTrace);
    }
  }
}

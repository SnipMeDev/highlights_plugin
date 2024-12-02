import 'package:flutter/cupertino.dart';
import 'package:highlights_plugin/highlights_platform_interface.dart';
import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';
import 'package:highlights_plugin/method_index.dart' as methods;
import 'highlights_interface.dart';

class HighlightsPlugin implements HighlightsInterface {
  HighlightsPlugin({this.debug = false}) {
    // TODO Test logger flag
    // Setup before first `instance` getter call
    HighlightsPlatformInterface.debug = debug;
  }

  final bool debug;

  @override
  Future<bool> initialize() =>
      HighlightsPlatformInterface.instance.initialize();

  @override
  Future<List<CodeHighlight>> getHighlights(
    String code,
    String? language,
    String? theme,
    List<PhraseLocation>? emphasisLocations,
  ) {
    try {
      return HighlightsPlatformInterface.instance.getHighlights(
        code,
        language,
        theme,
        emphasisLocations,
      );
    } catch (e, st) {
      _printDebugInfo(methods.getHighlights, e, st);
      return Future.value([]);
    }
  }

  @override
  Future<List<String>> getLanguages() async {
    try {
      return await HighlightsPlatformInterface.instance.getLanguages();
    } catch (e, st) {
      _printDebugInfo(methods.getLanguages, e, st);
      return [];
    }
  }

  @override
  Future<List<String>> getThemes() async {
    try {
      return await HighlightsPlatformInterface.instance.getThemes();
    } catch (e, st) {
      _printDebugInfo(methods.getThemes, e, st);
      return [];
    }
  }

  @override
  Future<void> setDarkMode(bool useDarkMode) {
    try {
      return HighlightsPlatformInterface.instance.setDarkMode(useDarkMode);
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

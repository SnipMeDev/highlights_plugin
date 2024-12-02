import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';
import 'package:highlights_plugin/native_platform_interface.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'highlights_interface.dart';
import 'method_index.dart' as methods;

abstract class HighlightsPlatformInterface extends PlatformInterface
    implements HighlightsInterface {
  HighlightsPlatformInterface() : super(token: _token);

  static final Object _token = Object();

  static bool debug = false;

  static HighlightsPlatformInterface _instance =
      NativePlatformInterface(debug: debug);

  static HighlightsPlatformInterface get instance => _instance;

  static set instance(HighlightsPlatformInterface instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  @override
  Future<bool> initialize() {
    throw UnimplementedError('${methods.initialize} has not been implemented.');
  }

  @override
  Future<List<CodeHighlight>> getHighlights(
    String? code,
    String? language,
    String? theme,
    List<PhraseLocation>? emphasisLocations,
  ) {
    throw UnimplementedError(
        '${methods.getHighlights} has not been implemented.');
  }

  @override
  Future<List<String>> getLanguages() {
    throw UnimplementedError(
        '${methods.getLanguages} has not been implemented.');
  }

  @override
  Future<List<String>> getThemes() {
    throw UnimplementedError('${methods.getThemes} has not been implemented.');
  }

  @override
  Future<void> setDarkMode(bool useDarkMode) {
    throw UnimplementedError(
        '${methods.setDarkMode} has not been implemented.');
  }
}

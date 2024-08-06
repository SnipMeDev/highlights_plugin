import 'package:flutter_test/flutter_test.dart';
import 'package:highlights_plugin/highlights_plugin.dart';
import 'package:highlights_plugin/highlights_plugin_platform_interface.dart';
import 'package:highlights_plugin/highlights_plugin_method_channel.dart';
import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockHighlightsPluginPlatform
    with MockPlatformInterfaceMixin
    implements HighlightsPluginPlatform {
  @override
  Future<List<CodeHighlight>> getHighlights(
    String code,
    String language,
    String theme,
    List<PhraseLocation> emphasisLocations,
  ) {
    // TODO: implement getHighlights
    throw UnimplementedError();
  }

  @override
  Future<List<String>> getLanguages() {
    // TODO: implement getLanguages
    throw UnimplementedError();
  }

  @override
  Future<List<String>> getThemes() {
    // TODO: implement getThemes
    throw UnimplementedError();
  }
}

void main() {
  final HighlightsPluginPlatform initialPlatform =
      HighlightsPluginPlatform.instance;

  test('$MethodChannelHighlightsPlugin is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelHighlightsPlugin>());
  });

  test('getPlatformVersion', () async {
    HighlightsPlugin highlightsPlugin = HighlightsPlugin();
    MockHighlightsPluginPlatform fakePlatform = MockHighlightsPluginPlatform();
    HighlightsPluginPlatform.instance = fakePlatform;
  });
}

import 'package:flutter_test/flutter_test.dart';
import 'package:highlights_plugin/highlights_plugin.dart';
import 'package:highlights_plugin/highlights_plugin_platform_interface.dart';
import 'package:highlights_plugin/highlights_plugin_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockHighlightsPluginPlatform
    with MockPlatformInterfaceMixin
    implements HighlightsPluginPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final HighlightsPluginPlatform initialPlatform = HighlightsPluginPlatform.instance;

  test('$MethodChannelHighlightsPlugin is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelHighlightsPlugin>());
  });

  test('getPlatformVersion', () async {
    HighlightsPlugin highlightsPlugin = HighlightsPlugin();
    MockHighlightsPluginPlatform fakePlatform = MockHighlightsPluginPlatform();
    HighlightsPluginPlatform.instance = fakePlatform;

    expect(await highlightsPlugin.getHighlights(), '42');
  });
}

import 'package:flutter/services.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:highlights_plugin/highlights_plugin_method_channel.dart';

import 'package:highlights_plugin/method_index.dart' as methods;
import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';

void main() {
  MethodChannelHighlightsPlugin platform =
      MethodChannelHighlightsPlugin(debug: true);
  const MethodChannel channel = MethodChannel('highlights_plugin');

  TestWidgetsFlutterBinding.ensureInitialized();

  setUp(() {
    TestDefaultBinaryMessengerBinding.instance.defaultBinaryMessenger
        .setMockMethodCallHandler(channel, (MethodCall methodCall) async {
      switch (methodCall.method) {
        case methods.getHighlights:
          return '[{"location":{"start":0,"end":10},"rgb":16711680},{"location":{"start":11,"end":20}}]';
        case methods.getLanguages:
          return ["language1", "language2"];
        case methods.getThemes:
          return ["theme1", "theme2"];
        default:
          return null;
      }
    });
  });

  tearDown(() {
    TestDefaultBinaryMessengerBinding.instance.defaultBinaryMessenger
        .setMockMethodCallHandler(channel, null);
  });

  test(methods.getHighlights, () async {
    expect(
      await platform.getHighlights(
        'code',
        'language',
        'theme',
        [],
      ),
      [
        ColorHighlight(
          location: PhraseLocation(start: 0, end: 10),
          rgb: 16711680,
        ),
        BoldHighlight(location: PhraseLocation(start: 11, end: 20)),
      ],
    );
  });

  test(methods.getLanguages, () async {
    expect(await platform.getLanguages(), ["language1", "language2"]);
  });

  test(methods.getThemes, () async {
    expect(await platform.getThemes(), ["theme1", "theme2"]);
  });

  test(methods.setDarkMode, () async {
    await platform.setDarkMode(true);
  });
}

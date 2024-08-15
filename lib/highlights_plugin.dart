import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';

import 'highlights_interface.dart';
import 'highlights_plugin_platform_interface.dart';

class HighlightsPlugin implements HighlightsInterface {
  @override
  Future<List<CodeHighlight>> getHighlights(
    String code,
    String language,
    String theme,
    List<PhraseLocation> emphasisLocations,
  ) {
    return HighlightsPluginPlatform.instance.getHighlights(
      code,
      language,
      theme,
      emphasisLocations,
    );
  }

  @override
  Future<List<String>> getLanguages() {
    return HighlightsPluginPlatform.instance.getLanguages();
  }

  @override
  Future<List<String>> getThemes() {
    return HighlightsPluginPlatform.instance.getThemes();
  }
}

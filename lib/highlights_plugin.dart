import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';
import 'package:highlights_plugin/model/syntax_language.dart';
import 'package:highlights_plugin/model/syntax_theme.dart';

import 'highlights_plugin_platform_interface.dart';

class HighlightsPlugin {
  Future<List<CodeHighlight>> getHighlights(
    String code,
    SyntaxLanguage language,
    SyntaxTheme theme,
    PhraseLocation emphasisLocations,
  ) {
    return HighlightsPluginPlatform.instance.getHighlights(
      code,
      language,
      theme,
      emphasisLocations,
    );
  }

  Future<List<SyntaxLanguage>> getLanguages() {
    return HighlightsPluginPlatform.instance.getLanguages();
  }

  Future<List<SyntaxTheme>> getThemes() {
    return HighlightsPluginPlatform.instance.getThemes();
  }
}

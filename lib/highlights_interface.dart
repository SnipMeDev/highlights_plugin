import 'package:highlights_plugin/model/code_highlight.dart';
import 'package:highlights_plugin/model/phrase_location.dart';

abstract interface class HighlightsInterface {
  void getHighlights(
    String code,
    String language,
    String theme,
    List<PhraseLocation> emphasisLocations,
  );

  Future<List<String>> getLanguages();

  Future<List<String>> getThemes();

  Future<void> setDarkMode(bool useDarkMode);
}

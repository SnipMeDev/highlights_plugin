import 'package:highlights_plugin/model/phrase_location.dart';

sealed class CodeHighlight {
  final PhraseLocation location;

  CodeHighlight(this.location);
}

class BoldHighlight extends CodeHighlight {
  BoldHighlight(PhraseLocation location) : super(location);
}

class ColorHighlight extends CodeHighlight {
  final int rgb;

  ColorHighlight(PhraseLocation location, this.rgb) : super(location);
}


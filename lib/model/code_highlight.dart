import 'package:highlights_plugin/model/phrase_location.dart';

import 'package:json_annotation/json_annotation.dart';

part 'code_highlight.g.dart';

@JsonSerializable(createToJson: false)
class CodeHighlight {
  final PhraseLocation location;

  CodeHighlight({required this.location});

  factory CodeHighlight.fromJson(
    Map<String, dynamic> json,
  ) {
    if (json.containsKey('rgb')) {
      return ColorHighlight.fromJson(json);
    } else {
      return BoldHighlight.fromJson(json);
    }
  }
}

@JsonSerializable(createToJson: false)
class BoldHighlight extends CodeHighlight {
  BoldHighlight({
    required PhraseLocation location,
  }) : super(location: location);

  factory BoldHighlight.fromJson(
    Map<String, dynamic> json,
  ) =>
      _$BoldHighlightFromJson(json);

  @override
  String toString() =>
      'BoldHighlight(start:${location.start}, end:${location.end})';
}

@JsonSerializable(createToJson: false)
class ColorHighlight extends CodeHighlight {
  final int rgb;

  ColorHighlight({
    required PhraseLocation location,
    required this.rgb,
  }) : super(location: location);

  factory ColorHighlight.fromJson(
    Map<String, dynamic> json,
  ) =>
      _$ColorHighlightFromJson(json);

  @override
  String toString() =>
      'ColorHighlight(start:${location.start}, end:${location.end}), rgb: $rgb)';
}

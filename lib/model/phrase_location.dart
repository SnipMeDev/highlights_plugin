import 'package:json_annotation/json_annotation.dart';

part 'phrase_location.g.dart';

@JsonSerializable()
class PhraseLocation {
  final int start;
  final int end;

  PhraseLocation({
    required this.start,
    required this.end,
  });

  factory PhraseLocation.fromJson(Map<String, dynamic> json) =>
      _$PhraseLocationFromJson(json);

  Map<String, dynamic> toJson() => _$PhraseLocationToJson(this);
}

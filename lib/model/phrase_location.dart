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

  @override
  String toString() => 'PhraseLocation(start: $start, end: $end)';

  @override
  bool operator ==(Object other) {
    if (identical(this, other)) return true;

    return other is PhraseLocation && other.start == start && other.end == end;
  }

  @override
  int get hashCode => start.hashCode ^ end.hashCode;
}

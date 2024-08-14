// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'phrase_location.dart';

// **************************************************************************
// JsonSerializableGenerator
// **************************************************************************

PhraseLocation _$PhraseLocationFromJson(Map<String, dynamic> json) =>
    PhraseLocation(
      start: (json['start'] as num).toInt(),
      end: (json['end'] as num).toInt(),
    );

Map<String, dynamic> _$PhraseLocationToJson(PhraseLocation instance) =>
    <String, dynamic>{
      'start': instance.start,
      'end': instance.end,
    };

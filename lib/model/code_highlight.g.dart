// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'code_highlight.dart';

// **************************************************************************
// JsonSerializableGenerator
// **************************************************************************

CodeHighlight _$CodeHighlightFromJson(Map<String, dynamic> json) =>
    CodeHighlight(
      location:
          PhraseLocation.fromJson(json['location'] as Map<String, dynamic>),
    );

BoldHighlight _$BoldHighlightFromJson(Map<String, dynamic> json) =>
    BoldHighlight(
      location:
          PhraseLocation.fromJson(json['location'] as Map<String, dynamic>),
    );

ColorHighlight _$ColorHighlightFromJson(Map<String, dynamic> json) =>
    ColorHighlight(
      location:
          PhraseLocation.fromJson(json['location'] as Map<String, dynamic>),
      rgb: (json['rgb'] as num).toInt(),
    );

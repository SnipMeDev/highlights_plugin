class PhraseLocation {
  final int start;
  final int end;

  PhraseLocation({
    required this.start,
    required this.end,
  });

  @override
  String toString() {
    return 'PhraseLocation{start: $start, end: $end}';
  }
}

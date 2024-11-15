# highlights_plugin

Dart implementation of highlights KMP engine:  
https://github.com/SnipMeDev/Highlights

<img width="250" src="https://github.com/user-attachments/assets/e28639c1-e1a5-47d2-9a39-d1a3f2973651"/>
<img width="250" src="https://github.com/user-attachments/assets/2a0239b5-bacd-4173-9d8b-697ef37fba05"/>

## Installation
```sh
flutter pub add highlights_plugin
```

## Usage
```dart
final plugin = HighlightsPlugin(debug: true);

// ['kotlin', 'dart', 'swift', 'php', 'java', ...]
final languages = await plugin.getLanguages();
// ['monokai', 'darcula', 'notepad', ...]
final themes = await plugin.getThemes();
// Bold Hello
final emphasis = PhraseLocation(start: 3, length: 8);
// List with ColorHighlight or BoldHighlight  
final result = await plugin.getHighlights(
  '// Hello, World!',
  languages.first,
  themes.first,
  [emphasis],
);
```

## Features
- 17 supported languages (Kotlin, Dart, Swift, PHP, etc)
- Light / dark mode
- 6 built-in themes
- Phrase bolding (emphasis)
- Result caching and support for incremental changes

## Support

- Android ✅
- iOS ✅
- macOS 🔴 (Not yet)
- Linux 🔴 (Not yet)
- Windows 🔴 (Not yet)
- Web 🔴 (Not yet)


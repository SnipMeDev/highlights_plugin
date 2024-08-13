import 'package:flutter/material.dart';
import 'package:highlights_plugin/highlights_plugin.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatefulWidget {
  const MyApp({super.key});

  @override
  State<MyApp> createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  final _highlightsPlugin = HighlightsPlugin();

  String? _language;
  String? _theme;
  List<String> _highlights = [];

  void _updateLanguage(String language) {
    setState(() {
      _language = language;
    });
  }

  void _updateTheme(String theme) {
    setState(() {
      _theme = theme;
    });
  }

  void _updateHighlights(String code) {
    _highlights = _highlightsPlugin.getHighlights(code, language, theme, [])
    setState(() {
      _highlights = code.split(' ');
    });
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('highlights'),
        ),
        body: Column(
          crossAxisAlignment: CrossAxisAlignment.stretch,
          children: [
            Expanded(
              child: TextField(
                onChanged: _updateHighlights,
                maxLines: 20,
                keyboardType: TextInputType.multiline,
                decoration: const InputDecoration(
                  border: OutlineInputBorder(),
                ),
              ),
            ),
            Expanded(
              child: Padding(
                padding: const EdgeInsets.all(16.0),
                child: Text(
                  _highlights.join(" | "),
                  textAlign: TextAlign.justify,
                ),
              ),
            )
          ],
        ),
        bottomNavigationBar: Padding(
          padding: const EdgeInsets.all(16),
          child: Column(
            mainAxisSize: MainAxisSize.min,
            crossAxisAlignment: CrossAxisAlignment.stretch,
            children: <Widget>[
              FutureDropdown(
                selected: _language,
                future: _highlightsPlugin.getLanguages(),
                onChanged: _updateLanguage,
              ),
              const SizedBox(height: 16),
              FutureDropdown(
                selected: _theme,
                future: _highlightsPlugin.getThemes(),
                onChanged: _updateTheme,
              ),
            ],
          ),
        ),
      ),
    );
  }
}

class FutureDropdown<T> extends StatelessWidget {
  const FutureDropdown({
    required this.selected,
    required this.future,
    required this.onChanged,
    Key? key,
  }) : super(key: key);

  final T? selected;
  final Future<List<T>> future;
  final Function(T) onChanged;

  @override
  Widget build(BuildContext context) {
    return FutureBuilder(
      future: future,
      builder: (context, snapshot) {
        final isLoaded = snapshot.connectionState == ConnectionState.done;
        final data = snapshot.data;
        final items = data?.map<DropdownMenuItem<String>>(
          (value) => DropdownMenuItem(
            value: value as String,
            child: Text(value),
          ),
        );

        if (!isLoaded) {
          return const CircularProgressIndicator();
        } else {
          return DropdownButton(
            hint: const Text("Select"),
            value: selected,
            items: items?.toList(),
            onChanged: (value) => onChanged(value as T),
          );
        }
      },
    );
  }
}

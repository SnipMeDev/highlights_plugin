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

  String _language = 'java';
  String _theme = 'monokai';

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

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Plugin example app'),
        ),
        body: const Center(
          child: Text('Running Highlights'),
        ),
        bottomNavigationBar: Column(
          mainAxisSize: MainAxisSize.min,
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

  final T selected;
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
          (e) => DropdownMenuItem(child: Text(e.toString())),
        );

        if (!isLoaded) {
          return const CircularProgressIndicator();
        } else {
          return DropdownButton(
            value: selected.toString(),
            items: items?.toList(),
            onChanged: (value) => onChanged(value as T),
          );
        }
      },
    );
  }
}

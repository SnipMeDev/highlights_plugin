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
              // FutureDropdown(
              //   selected: _theme,
              //   future: _highlightsPlugin.getThemes(),
              //   onChanged: _updateTheme,
              // ),
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
        print(data);
        final items = data?.map<DropdownMenuItem<String>>(
          (e) => DropdownMenuItem(child: Text(e.toString())),
        ).toList();

        if (!isLoaded) {
          return const CircularProgressIndicator();
        } else {
          return DropdownButton(
            value: selected,
            items: [DropdownMenuItem(child: Text('$data'))],
            onChanged: (value) => onChanged(value as T),
          );
        }
      },
    );
  }
}

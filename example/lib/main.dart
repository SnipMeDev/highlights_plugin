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
  final _highlightsPlugin = HighlightsPlugin(debug: true);

  String? _code;
  String? _language;
  String? _theme;
  List<String> _highlights = [];

  Future<void> _updateDarkMode(bool isDark) async {
    _highlightsPlugin.setDarkMode(isDark);
    _updateHighlights(_code ?? '');
  }

  void _updateLanguage(String language) {
    setState(() {
      _language = language;
    });
    _updateHighlights(_code ?? '');
  }

  void _updateTheme(String theme) {
    setState(() {
      _theme = theme;
    });
    _updateHighlights(_code ?? '');
  }

  Future<void> _updateHighlights(String code) async {
    _code = code;
    _highlightsPlugin.getHighlights(
      _code ?? '',
      _language ?? '',
      _theme ?? '',
      [],
    ).then((value) {
      setState(() {
        _highlights = value.map((highlight) => highlight.toString()).toList();
      });
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
                child: _EditableTextField(
              onChange: (code) => _updateHighlights(code),
            )),
            Expanded(
              child: Padding(
                padding: const EdgeInsets.all(16.0),
                child: Text(
                  _highlights.join("\n"),
                  textAlign: TextAlign.start,
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
              _ThemeSwitchRow(
                onChange: (isDark) => _updateDarkMode(isDark),
              ),
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

class _EditableTextField extends StatelessWidget {
  const _EditableTextField({
    required this.onChange,
  });

  final void Function(String) onChange;

  @override
  Widget build(BuildContext context) {
    return TextField(
      onChanged: onChange,
      maxLines: 20,
      keyboardType: TextInputType.multiline,
      decoration: const InputDecoration(
        border: OutlineInputBorder(),
      ),
      contextMenuBuilder: (context, state) {
        final TextEditingValue value = state.textEditingValue;
        final List<ContextMenuButtonItem> buttonItems = state.contextMenuButtonItems;
        final selected = value.selection.textInside(value.text);

        buttonItems.insert(
          0,
          ContextMenuButtonItem(
            label: 'Bold',
            onPressed: () {
              ContextMenuController.removeAny();
              print('Bold word $selected');
            },
          ),
        );
        return AdaptiveTextSelectionToolbar.buttonItems(
          anchors: state.contextMenuAnchors,
          buttonItems: buttonItems,
        );
      },
    );
  }
}

class _ThemeSwitchRow extends StatefulWidget {
  const _ThemeSwitchRow({required this.onChange});

  final void Function(bool) onChange;

  @override
  State<_ThemeSwitchRow> createState() => _ThemeSwitchRowState();
}

class _ThemeSwitchRowState extends State<_ThemeSwitchRow> {
  var isDark = false;

  @override
  Widget build(BuildContext context) {
    void onChanged(bool value) {
      widget.onChange(value);
      setState(() {
        isDark = value;
      });
    }

    return Row(
      mainAxisAlignment: MainAxisAlignment.spaceEvenly,
      children: [
        const Icon(Icons.brightness_4),
        Switch(
          value: isDark,
          onChanged: (isDark) => onChanged(isDark),
        ),
        const Icon(Icons.brightness_2),
      ],
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


import 'highlights_plugin_platform_interface.dart';


class HighlightsPlugin {
  Future<String?> getHighlights() {
    return HighlightsPluginPlatform.instance.getPlatformVersion();
  }
}

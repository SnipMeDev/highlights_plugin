#include "include/highlights_plugin/highlights_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "highlights_plugin.h"

void HighlightsPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  highlights_plugin::HighlightsPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}

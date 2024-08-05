#ifndef FLUTTER_PLUGIN_HIGHLIGHTS_PLUGIN_H_
#define FLUTTER_PLUGIN_HIGHLIGHTS_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace highlights_plugin {

class HighlightsPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  HighlightsPlugin();

  virtual ~HighlightsPlugin();

  // Disallow copy and assign.
  HighlightsPlugin(const HighlightsPlugin&) = delete;
  HighlightsPlugin& operator=(const HighlightsPlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace highlights_plugin

#endif  // FLUTTER_PLUGIN_HIGHLIGHTS_PLUGIN_H_

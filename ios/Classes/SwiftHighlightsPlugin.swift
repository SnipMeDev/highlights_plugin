import Flutter
import UIKit
import highlights

public class SwiftHighlightsPlugin: NSObject, FlutterPlugin {
  public static func register(with registrar: FlutterPluginRegistrar) {
    let channel = FlutterMethodChannel(
        name: "highlights_plugin",
        binaryMessenger: registrar.messenger()
    )
    let instance = SwiftHighlightsPlugin()
    registrar.addMethodCallDelegate(instance, channel: channel)
  }

  public func handle(
    _ call: FlutterMethodCall,
    result: @escaping FlutterResult
  ) {
      switch(call.method) {
      case "getLanguages":
          let languages = SyntaxLanguage.companion.getNames()
          result(languages)
      case "getThemes":
          let themes = SyntaxThemes().getNames()
          result(themes)
      default:
          result(["No results"])
      }
  }
}

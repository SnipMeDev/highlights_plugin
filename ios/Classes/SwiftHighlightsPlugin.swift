import Flutter
import UIKit
import highlights

public class SwiftHighlightsPlugin: NSObject, FlutterPlugin {
    var highlights = Highlights.companion.default();

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
      case "getHighlights":
          
          let map = call.arguments as! Dictionary<String, Any>
          
          let language = SyntaxLanguage.companion.getByName(name:  )

          highlights = Highlights.Builder(
            code: String,
            language: language,
            theme: <#T##SyntaxTheme#>,
            emphasisLocations: call.arguments.,
          ).build();

          let result;
      default:
          result(["No results"])
      }
  }
}

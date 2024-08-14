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
          
          let codeArg = map["code"] as! String
          
          let languageArg = map["language"] as! String
          let language = SyntaxLanguage.companion.getByName(name: languageArg)
          
          let themeArg = map["theme"] as! String
          let theme = SyntaxThemes.shared.light.first(where: { (key, _) in
              key.lowercased() == themeArg.lowercased()
          })?.value

          highlights = Highlights.Builder(
            code: codeArg,
            language: language ?? SyntaxLanguage.default_,
            theme: theme ?? SyntaxThemes().default(darkMode: false),
            emphasisLocations: [] // TODO Handle
          ).build()

          let encoder = JSONEncoder()
          let json = try encoder.encode(highlights)

          result(json)
      default:
          result(["No results"])
      }
  }
}

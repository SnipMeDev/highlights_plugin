import Flutter
import UIKit
import highlights

public class SwiftHighlightsPlugin: NSObject, FlutterPlugin {
    var highlights = Highlights.companion.default();
    var useDarkMode = false;

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
          let themes = SyntaxThemes().getNames(darkMode: useDarkMode)
          result(themes)
      case "getHighlights":
          let map = call.arguments as! Dictionary<String, Any>
          
          let codeArg = map["code"] as! String
          
          let languageArg = map["language"] as! String
          let language = SyntaxLanguage.companion.getByName(name: languageArg)
          
          let themeArg = map["theme"] as! String
          let theme = SyntaxThemes().getByName(name: themeArg, darkMode: useDarkMode)
          
          let emphasis = tryGetEmphasisFromJson(map["emphasisLocations"] as? String)

          updateInstance(
            code: codeArg,
            language: language,
            theme: theme,
            emphasisLocations: emphasis
          )

          let highlightList = highlights.getHighlights();

          result(ExtensionsKt.toJson(highlightList))
      case "setDarkMode":
          let map = call.arguments as! Dictionary<String, Any>
          useDarkMode = map["useDarkMode"] as? Bool ?? false
          result(nil)
      default:
          result(["No results"])
      }
  }
    
    private func updateInstance(
        code: String?,
        language: SyntaxLanguage?,
        theme: SyntaxTheme?,
        emphasisLocations: [PhraseLocation]?
    ) {
        if highlights.getLanguage() == language && highlights.getTheme() == theme {
            if let code = code {
                highlights.setCode(code: code)
            }
            if let locations = emphasisLocations {
                let array = KotlinArray<PhraseLocation>(
                    size: Int32(locations.count)) { KotlinInt in
                        locations[Int(truncating: KotlinInt)]
                    }
                
                    highlights.setEmphasis(locations: array)
            }
        } else {
            highlights = Highlights.Builder(
                code: code ?? "",
                language: language ?? SyntaxLanguage.default_,
                theme: theme ?? SyntaxThemes().default(darkMode: useDarkMode),
                emphasisLocations: emphasisLocations ?? []
            ).build()
        }
    }
    
    private func tryGetEmphasisFromJson(_ json: String?) -> [PhraseLocation] {
        guard let json = json else { return [] }
        return Array(ExtensionsKt.phraseLocationSetFromJson(json))
    }
}

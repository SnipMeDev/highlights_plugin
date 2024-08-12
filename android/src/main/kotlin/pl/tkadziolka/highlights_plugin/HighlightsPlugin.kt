package pl.tkadziolka.highlights_plugin

import dev.snipme.highlights.Highlights
import dev.snipme.highlights.model.CodeHighlight
import dev.snipme.highlights.model.SyntaxLanguage
import dev.snipme.highlights.model.SyntaxThemes
import io.flutter.embedding.engine.plugins.FlutterPlugin
import io.flutter.plugin.common.MethodCall
import io.flutter.plugin.common.MethodChannel
import io.flutter.plugin.common.MethodChannel.MethodCallHandler
import io.flutter.plugin.common.MethodChannel.Result

/** HighlightsPlugin */
class HighlightsPlugin : FlutterPlugin, MethodCallHandler {
    /// The MethodChannel that will the communication between Flutter and native Android
    ///
    /// This local reference serves to register the plugin with the Flutter Engine and unregister it
    /// when the Flutter Engine is detached from the Activity
    private lateinit var channel: MethodChannel
    private lateinit var highlights: Highlights

    override fun onAttachedToEngine(flutterPluginBinding: FlutterPlugin.FlutterPluginBinding) {
        channel = MethodChannel(flutterPluginBinding.binaryMessenger, "highlights_plugin")
        channel.setMethodCallHandler(this)
    }

    override fun onMethodCall(call: MethodCall, result: Result) {
        println("Method call ${call.method}")
        when (call.method) {
            "getHighlights" ->
//                highlights = getHighlights(
//                    code = call.argument("code") ?: "",
//                    language = call.argument("language") ?: SyntaxLanguage.DEFAULT,
//                    theme = call.argument("theme") ?: SyntaxThemes.default(),
//                    emphasisLocations = call.argument("emphasisLocations") ?: emptyList()
//                )
//                result.success(highlights)
                result.success(listOf<CodeHighlight>())

            "getLanguages" -> result.success(SyntaxLanguage.getNames())
            "getThemes" -> result.success(SyntaxThemes.getNames())
            else -> {
                result.notImplemented()
            }
        }

//        if (call.method == "getHighlights") {
//
//            highlights = Highlights.Builder(
//                code = call.argument("code") ?: "",
//                language = call.argument("language") ?: SyntaxLanguage.DEFAULT,
//                theme = call.argument("theme") ?: SyntaxThemes.default(),
//                emphasisLocations = call.argument("emphasisLocations") ?: emptyList()
//            ).build()
//
//
//            result.success(highlights)
//        } else {
//            result.notImplemented()
//        }
    }

    override fun onDetachedFromEngine(binding: FlutterPlugin.FlutterPluginBinding) {
        channel.setMethodCallHandler(null)
    }
}

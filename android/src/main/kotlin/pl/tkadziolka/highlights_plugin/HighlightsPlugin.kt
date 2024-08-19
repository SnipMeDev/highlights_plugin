package pl.tkadziolka.highlights_plugin

import dev.snipme.highlights.Highlights
import dev.snipme.highlights.internal.toJson
import dev.snipme.highlights.model.PhraseLocation
import dev.snipme.highlights.model.SyntaxLanguage
import dev.snipme.highlights.model.SyntaxTheme
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
    private var useDarkMode = false

    override fun onAttachedToEngine(flutterPluginBinding: FlutterPlugin.FlutterPluginBinding) {
        channel = MethodChannel(flutterPluginBinding.binaryMessenger, "highlights_plugin")
        channel.setMethodCallHandler(this)
        highlights = Highlights.default()
    }

    override fun onMethodCall(call: MethodCall, result: Result) {
        when (call.method) {
            "getHighlights" -> {
                updateInstance(
                    code = call.argument("code"),
                    language = SyntaxLanguage.getByName(call.argument("language") ?: ""),
                    theme = SyntaxThemes.getByName(call.argument("theme") ?: "", useDarkMode),
                    emphasisLocations = call.argument("emphasisLocations")
                )

                val highlightList = highlights.getHighlights()
                result.success(highlightList.toJson())
            }

            "getLanguages" -> result.success(SyntaxLanguage.getNames())
            "getThemes" -> result.success(SyntaxThemes.getNames(useDarkMode))
            "setDarkMode" -> {
                useDarkMode = call.argument("useDarkMode") ?: false
                result.success(null)
            }

            else -> {
                result.notImplemented()
            }
        }
    }

    private fun updateInstance(
        code: String?,
        language: SyntaxLanguage?,
        theme: SyntaxTheme?,
        emphasisLocations: List<PhraseLocation>?,
    ) {
        if (highlights.getLanguage() == language && highlights.getTheme() == theme) {
            code?.let { highlights.setCode(it) }
            emphasisLocations?.let { locations -> locations.forEach { highlights.setEmphasis(it) } }
        } else {
            highlights = Highlights.Builder(
                code = code ?: "",
                language = language ?: SyntaxLanguage.DEFAULT,
                theme = theme ?: SyntaxThemes.default(useDarkMode),
                emphasisLocations = emphasisLocations ?: emptyList()
            ).build()
        }
    }

    override fun onDetachedFromEngine(binding: FlutterPlugin.FlutterPluginBinding) {
        channel.setMethodCallHandler(null)
    }
}

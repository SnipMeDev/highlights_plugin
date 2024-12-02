package dev.snipme.highlights_plugin

import dev.snipme.highlights.DefaultHighlightsResultListener
import dev.snipme.highlights.Highlights
import dev.snipme.highlights.internal.phraseLocationSetFromJson
import dev.snipme.highlights.internal.toJson
import dev.snipme.highlights.model.CodeHighlight
import dev.snipme.highlights.model.PhraseLocation
import dev.snipme.highlights.model.SyntaxLanguage
import dev.snipme.highlights.model.SyntaxTheme
import dev.snipme.highlights.model.SyntaxThemes
import io.flutter.embedding.engine.plugins.FlutterPlugin
import io.flutter.plugin.common.MethodCall
import io.flutter.plugin.common.MethodChannel
import io.flutter.plugin.common.MethodChannel.MethodCallHandler
import io.flutter.plugin.common.MethodChannel.Result

class HighlightsPlugin : FlutterPlugin, MethodCallHandler {
    private lateinit var channel: MethodChannel
    private lateinit var highlights: Highlights
    private var useDarkMode = false

    override fun onAttachedToEngine(flutterPluginBinding: FlutterPlugin.FlutterPluginBinding) {
        channel = MethodChannel(flutterPluginBinding.binaryMessenger, "highlights_plugin")
        channel.setMethodCallHandler(this)
        highlights = Highlights.Builder().build()
    }

    override fun onDetachedFromEngine(binding: FlutterPlugin.FlutterPluginBinding) {
        channel.setMethodCallHandler(null)
    }

    override fun onMethodCall(call: MethodCall, result: Result) {
        try {
            when (call.method) {
                "getHighlights" -> {
                    updateInstance(
                        code = call.argument("code"),
                        language = SyntaxLanguage.getByName(call.argument("language") ?: ""),
                        theme = SyntaxThemes.getByName(call.argument("theme") ?: "", useDarkMode),
                        emphasisLocations = tryGetEmphasisFromJson(call.argument("emphasisLocations"))
                    )

                    val output = highlights.getHighlights()
                    result.success(output.toJson())
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
        } catch (e: Exception) {
            result.error("Error", e.message, e)
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

    private fun tryGetEmphasisFromJson(json: String?): List<PhraseLocation> {
        if (json == null) return emptyList()
        return json.phraseLocationSetFromJson().toList()
    }
}

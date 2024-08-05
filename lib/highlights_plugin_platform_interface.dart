import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'highlights_plugin_method_channel.dart';

abstract class HighlightsPluginPlatform extends PlatformInterface {
  /// Constructs a HighlightsPluginPlatform.
  HighlightsPluginPlatform() : super(token: _token);

  static final Object _token = Object();

  static HighlightsPluginPlatform _instance = MethodChannelHighlightsPlugin();

  /// The default instance of [HighlightsPluginPlatform] to use.
  ///
  /// Defaults to [MethodChannelHighlightsPlugin].
  static HighlightsPluginPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [HighlightsPluginPlatform] when
  /// they register themselves.
  static set instance(HighlightsPluginPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getHighlights() {
    throw UnimplementedError('getHighlights() has not been implemented.');
  }
}

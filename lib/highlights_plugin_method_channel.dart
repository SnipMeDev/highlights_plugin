import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'highlights_plugin_platform_interface.dart';

/// An implementation of [HighlightsPluginPlatform] that uses method channels.
class MethodChannelHighlightsPlugin extends HighlightsPluginPlatform {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('highlights_plugin');

  @override
  Future<String?> getPlatformVersion() async {
    final version = await methodChannel.invokeMethod<String>('getPlatformVersion');
    return version;
  }
}

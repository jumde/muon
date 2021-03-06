// Copyright (c) 2013 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#include "atom/common/options_switches.h"

namespace atom {

namespace options {

const char kTitle[]          = "title";
const char kIcon[]           = "icon";
const char kFrame[]          = "frame";
const char kShow[]           = "show";
const char kCenter[]         = "center";
const char kX[]              = "x";
const char kY[]              = "y";
const char kWidth[]          = "width";
const char kHeight[]         = "height";
const char kMinWidth[]       = "minWidth";
const char kMinHeight[]      = "minHeight";
const char kMaxWidth[]       = "maxWidth";
const char kMaxHeight[]      = "maxHeight";
const char kResizable[]      = "resizable";
const char kMovable[]        = "movable";
const char kMinimizable[]    = "minimizable";
const char kMaximizable[]    = "maximizable";
const char kFullScreenable[] = "fullscreenable";
const char kClosable[]       = "closable";
const char kFullscreen[]     = "fullscreen";
const char kAppName[]        = "muon-app-name";
const char kAppVersion[]     = "muon-app-version";
const char kAppChannel[]     = "muon-app-channel";
const char kUserDataDirName[]     = "user-data-dir-name";

// Whether the window should show in taskbar.
const char kSkipTaskbar[] = "skipTaskbar";

// Start with the kiosk mode, see Opera's page for description:
// http://www.opera.com/support/mastering/kiosk/
const char kKiosk[] = "kiosk";

// Make windows stays on the top of all other windows.
const char kAlwaysOnTop[] = "alwaysOnTop";

// Enable the NSView to accept first mouse event.
const char kAcceptFirstMouse[] = "acceptFirstMouse";

// Whether window size should include window frame.
const char kUseContentSize[] = "useContentSize";

// The requested title bar style for the window
const char kTitleBarStyle[] = "titleBarStyle";

// The menu bar is hidden unless "Alt" is pressed.
const char kAutoHideMenuBar[] = "autoHideMenuBar";

// Enable window to be resized larger than screen.
const char kEnableLargerThanScreen[] = "enableLargerThanScreen";

// Forces to use dark theme on Linux.
const char kDarkTheme[] = "darkTheme";

// Window type hint.
const char kType[] = "type";

// Disable auto-hiding cursor.
const char kDisableAutoHideCursor[] = "disableAutoHideCursor";

// Use the macOS' standard window instead of the textured window.
const char kStandardWindow[] = "standardWindow";

// Default browser window background color.
const char kBackgroundColor[] = "backgroundColor";

// Whether the window should have a shadow.
const char kHasShadow[] = "hasShadow";

// Whether the window can be activated.
const char kFocusable[] = "focusable";

// The WebPreferences.
const char kWebPreferences[] = "webPreferences";

// The factor of which page should be zoomed.
const char kZoomFactor[] = "zoomFactor";

// Instancd ID of guest WebContents.
const char kGuestInstanceID[] = "guestInstanceId";

// Web runtime features.
const char kExperimentalFeatures[]       = "experimentalFeatures";
const char kExperimentalCanvasFeatures[] = "experimentalCanvasFeatures";

// Enable blink features.
// TODO(kevinsawicki) Rename to enableBlinkFeatures in 2.0
const char kBlinkFeatures[] = "blinkFeatures";

// Disable blink features.
const char kDisableBlinkFeatures[] = "disableBlinkFeatures";

}  // namespace options

namespace switches {

// Ppapi Flash path.
const char kPpapiFlashPath[] = "ppapi-flash-path";

// Ppapi Flash version.
const char kPpapiFlashVersion[] = "ppapi-flash-version";

// Disable HTTP cache.
const char kDisableHttpCache[] = "disable-http-cache";

// The list of standard schemes.
const char kStandardSchemes[] = "standard-schemes";

// Register schemes to handle service worker.
const char kRegisterServiceWorkerSchemes[] = "register-service-worker-schemes";

// The minimum SSL/TLS version ("tls1", "tls1.1", or "tls1.2") that
// TLS fallback will accept.
const char kSSLVersionFallbackMin[] = "ssl-version-fallback-min";

// Comma-separated list of SSL cipher suites to disable.
const char kCipherSuiteBlacklist[] = "cipher-suite-blacklist";

// The browser process app model ID
const char kAppUserModelId[] = "app-user-model-id";

// The command line switch versions of the options.
const char kBackgroundColor[] = "background-color";
const char kZoomFactor[]      = "zoom-factor";

// Widevine options
// Path to Widevine CDM binaries.
const char kWidevineCdmPath[] = "widevine-cdm-path";
// Widevine CDM version.
const char kWidevineCdmVersion[] = "widevine-cdm-version";
}  // namespace switches

}  // namespace atom

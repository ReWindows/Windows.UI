#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 6 member(s).
namespace InputTraceLogging {
class Haptics {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentHapticsControllerInfo@Haptics@InputTraceLogging@@SAXW4HapticDeviceType@1Devices@Windows@@_N1@Z
    static void GetCurrentHapticsControllerInfo(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveform@Haptics@InputTraceLogging@@SAXGGGGW4HapticDeviceType@1Devices@Windows@@@Z
    static void TrySendHapticWaveform(unsigned short, unsigned short, unsigned short, unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveformForDuration@Haptics@InputTraceLogging@@SAXGGN_JGGW4HapticDeviceType@1Devices@Windows@@@Z
    static void TrySendHapticWaveformForDuration(unsigned short, unsigned short, double, int64_t, unsigned short, unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveformForPlayCount@Haptics@InputTraceLogging@@SAXGGNH_JGGW4HapticDeviceType@1Devices@Windows@@@Z
    static void TrySendHapticWaveformForPlayCount(unsigned short, unsigned short, double, int, int64_t, unsigned short, unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveformWithIntensity@Haptics@InputTraceLogging@@SAXGGNGGW4HapticDeviceType@1Devices@Windows@@@Z
    static void TrySendHapticWaveformWithIntensity(unsigned short, unsigned short, double, unsigned short, unsigned short, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStopFeedback@Haptics@InputTraceLogging@@SAXXZ
    static void TryStopFeedback();
};
} // namespace InputTraceLogging

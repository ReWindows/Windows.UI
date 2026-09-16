#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 3 member(s).
class InputTraceLogging {
public:
    class Delivery;
    class Haptics;
    class PerfRegion;
    class Pointer;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HapticDeviceTypeToString@InputTraceLogging@@CAPEBDW4HapticDeviceType@Haptics@Devices@Windows@@@Z
    static char const * HapticDeviceTypeToString(int);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 3 member(s).
namespace InputTraceLogging {
class Delivery {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeMessage@Delivery@InputTraceLogging@@SAXPEAUHWND__@@I_N@Z
    static void InvokeMessage(HWND__*, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveMessage@Delivery@InputTraceLogging@@SAXPEAUHWND__@@I_K_J_N@Z
    static void ReceiveMessage(HWND__*, unsigned int, uint64_t, int64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveMessage@Delivery@InputTraceLogging@@SAXPEAUHWND__@@I_N@Z
    static void ReceiveMessage(HWND__*, unsigned int, bool);
};
} // namespace InputTraceLogging

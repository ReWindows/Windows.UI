#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 1 member(s).
namespace InputTraceLogging {
class Pointer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakePointerPoint@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@AEBUPoint@Foundation@Windows@@_KPEBUtagINPUT_TRANSFORM@@_N@Z
    static void MakePointerPoint(tagPOINTER_INFO const *, WindissectOpaque const &, uint64_t, tagINPUT_TRANSFORM const *, bool);
};
} // namespace InputTraceLogging

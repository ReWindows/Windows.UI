#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 6 member(s).
namespace CUITelemetry {
class CoreWindowSitePutVisible {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreWindowSitePutVisible@CUITelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowSitePutVisible@CUITelemetry@@QEAA@XZ
    ~CoreWindowSitePutVisible();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreWindowSitePutVisible@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreWindowSitePutVisible@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

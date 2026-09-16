#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace CUITelemetry {
class CoreWindowSiteClose {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreWindowSiteClose@CUITelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowSiteClose@CUITelemetry@@QEAA@XZ
    ~CoreWindowSiteClose();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreWindowSiteClose@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreWindowSiteClose@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

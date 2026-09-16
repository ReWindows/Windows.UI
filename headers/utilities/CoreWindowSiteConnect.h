#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace CUITelemetry {
class CoreWindowSiteConnect {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreWindowSiteConnect@CUITelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowSiteConnect@CUITelemetry@@QEAA@XZ
    ~CoreWindowSiteConnect();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreWindowSiteConnect@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreWindowSiteConnect@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace CUITelemetry {
class CoreWindowSitePutIsSuspendable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreWindowSitePutIsSuspendable@CUITelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowSitePutIsSuspendable@CUITelemetry@@QEAA@XZ
    ~CoreWindowSitePutIsSuspendable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreWindowSitePutIsSuspendable@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreWindowSitePutIsSuspendable@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

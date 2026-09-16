#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace CUITelemetry {
class ResolveAndDispatchViewEventCall {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoreWindowSiteIsDisposed@ResolveAndDispatchViewEventCall@CUITelemetry@@QEAAXXZ
    void CoreWindowSiteIsDisposed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ResolveAndDispatchViewEventCall@CUITelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResolveAndDispatchViewEventCall@CUITelemetry@@QEAA@XZ
    ~ResolveAndDispatchViewEventCall();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ResolveAndDispatchViewEventCall@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ResolveAndDispatchViewEventCall@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

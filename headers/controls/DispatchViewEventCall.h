#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class DispatchViewEventCall {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DispatchViewEventCall@CUITelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DispatchViewEventCall@CUITelemetry@@QEAA@XZ
    ~DispatchViewEventCall();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DispatchViewEventCall@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DispatchViewEventCall@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

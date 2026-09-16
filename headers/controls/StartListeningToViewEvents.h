#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class StartListeningToViewEvents {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartListeningToViewEvents@CUITelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartListeningToViewEvents@CUITelemetry@@QEAA@XZ
    ~StartListeningToViewEvents();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartListeningToViewEvents@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartListeningToViewEvents@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

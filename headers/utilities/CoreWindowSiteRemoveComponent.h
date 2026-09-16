#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 4 member(s).
namespace CUITelemetry {
class CoreWindowSiteRemoveComponent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreWindowSiteRemoveComponent@CUITelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowSiteRemoveComponent@CUITelemetry@@QEAA@XZ
    ~CoreWindowSiteRemoveComponent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreWindowSiteRemoveComponent@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreWindowSiteRemoveComponent@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

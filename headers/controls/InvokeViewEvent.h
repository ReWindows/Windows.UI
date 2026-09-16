#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 7 member(s).
namespace CUITelemetry {
class InvokeViewEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseEvent@InvokeViewEvent@CUITelemetry@@QEAAXXZ
    void CloseEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModalDialogEvent@InvokeViewEvent@CUITelemetry@@QEAAXXZ
    void ModalDialogEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyEvent@InvokeViewEvent@CUITelemetry@@QEAAXXZ
    void ReadyEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InvokeViewEvent@CUITelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvokeViewEvent@CUITelemetry@@QEAA@XZ
    ~InvokeViewEvent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InvokeViewEvent@CUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InvokeViewEvent@CUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CUITelemetry

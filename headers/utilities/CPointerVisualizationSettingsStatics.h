#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace Windows::UI::Input {
class CPointerVisualizationSettingsStatics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPointerVisualizationSettingsStatics@Input@UI@Windows@@QEAA@XZ
    CPointerVisualizationSettingsStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CPointerVisualizationSettingsStatics@Input@UI@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CPointerVisualizationSettingsStatics@Input@UI@Windows@@EEAAJPEAPEAUIPointerVisualizationSettings@234@@Z
    virtual long GetForCurrentView(::Windows::UI::Input::IPointerVisualizationSettings * *);
};
} // namespace Windows::UI::Input

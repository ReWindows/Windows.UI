#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 4 member(s).
namespace Windows::Devices::Input {
class CMouseDeviceStatics {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CMouseDeviceStatics@Input@Devices@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CMouseDeviceStatics@Input@Devices@Windows@@EEAAJPEAPEAUIMouseDevice@234@@Z
    virtual long GetForCurrentView(::Windows::Devices::Input::IMouseDevice * *);
};
} // namespace Windows::Devices::Input

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 7 member(s).
namespace Windows::Devices::Input {
class CPointerDeviceStatics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPointerDeviceStatics@Input@Devices@Windows@@QEAA@XZ
    CPointerDeviceStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CPointerDeviceStatics@Input@Devices@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDevice@CPointerDeviceStatics@Input@Devices@Windows@@EEAAJIPEAPEAUIPointerDevice@234@@Z
    virtual long GetPointerDevice(unsigned int, ::Windows::Devices::Input::IPointerDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDeviceFromHandle@CPointerDeviceStatics@Input@Devices@Windows@@EEAAJPEAXPEAPEAUIPointerDevice@234@@Z
    virtual long GetPointerDeviceFromHandle(void *, ::Windows::Devices::Input::IPointerDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDevices@CPointerDeviceStatics@Input@Devices@Windows@@EEAAJPEAPEAU?$IVectorView@PEAVPointerDevice@Input@Devices@Windows@@@Collections@Foundation@4@@Z
    virtual long GetPointerDevices(WindissectOpaque * *);
};
} // namespace Windows::Devices::Input

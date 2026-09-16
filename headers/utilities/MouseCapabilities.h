#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 22 member(s).
namespace Windows::Devices::Input {
class MouseCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MouseCapabilities@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MouseCapabilities@Input@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@MouseCapabilities@Input@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MouseCapabilities@Input@Devices@Windows@@QEAA@XZ
    MouseCapabilities();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MouseCapabilities@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MouseCapabilities@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalWheelPresent@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAH@Z
    virtual long get_HorizontalWheelPresent(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MousePresent@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAH@Z
    virtual long get_MousePresent(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NumberOfButtons@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAI@Z
    virtual long get_NumberOfButtons(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SwapButtons@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAH@Z
    virtual long get_SwapButtons(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalWheelPresent@MouseCapabilities@Input@Devices@Windows@@UEAAJPEAH@Z
    virtual long get_VerticalWheelPresent(int *);
};
} // namespace Windows::Devices::Input

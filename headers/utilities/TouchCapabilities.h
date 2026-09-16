#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 19 member(s).
namespace Windows::Devices::Input {
class TouchCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TouchCapabilities@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TouchCapabilities@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TouchCapabilities@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TouchCapabilities@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TouchCapabilities@Input@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TouchCapabilities@Input@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TouchCapabilities@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TouchCapabilities@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchCapabilities@Input@Devices@Windows@@QEAA@XZ
    TouchCapabilities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contacts@TouchCapabilities@Input@Devices@Windows@@UEAAJPEAI@Z
    virtual long get_Contacts(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TouchPresent@TouchCapabilities@Input@Devices@Windows@@UEAAJPEAH@Z
    virtual long get_TouchPresent(int *);
};
} // namespace Windows::Devices::Input

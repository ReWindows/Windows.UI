#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 18 member(s).
namespace Windows::Devices::Input {
class KeyboardCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KeyboardCapabilities@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@KeyboardCapabilities@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@KeyboardCapabilities@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@KeyboardCapabilities@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@KeyboardCapabilities@Input@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@KeyboardCapabilities@Input@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyboardCapabilities@Input@Devices@Windows@@QEAA@XZ
    KeyboardCapabilities();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KeyboardCapabilities@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KeyboardCapabilities@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardPresent@KeyboardCapabilities@Input@Devices@Windows@@UEAAJPEAH@Z
    virtual long get_KeyboardPresent(int *);
};
} // namespace Windows::Devices::Input

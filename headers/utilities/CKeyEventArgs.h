#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 23 member(s).
class CKeyEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CKeyEventArgs@@QEAA@XZ
    CKeyEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CKeyEventArgs@@UEAAJW4VirtualKey@System@Windows@@UCorePhysicalKeyStatus@Core@UI@4@@Z
    virtual long Initialize(int, WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CKeyEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyStatus@CKeyEventArgs@@UEAAJPEAUCorePhysicalKeyStatus@Core@UI@Windows@@@Z
    virtual long get_KeyStatus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VirtualKey@CKeyEventArgs@@UEAAJPEAW4VirtualKey@System@Windows@@@Z
    virtual long get_VirtualKey(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CKeyEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

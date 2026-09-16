#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 22 member(s).
class CVisibilityChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisibilityChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisibilityChangedEventArgs@@QEAA@XZ
    CVisibilityChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CVisibilityChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CVisibilityChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CVisibilityChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVisibilityChangedEventArgs@@UEAAJE@Z
    virtual long Initialize(unsigned char);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisibilityChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisibilityChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CVisibilityChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@CVisibilityChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_Visible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CVisibilityChangedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

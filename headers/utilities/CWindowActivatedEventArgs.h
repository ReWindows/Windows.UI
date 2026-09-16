#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 22 member(s).
class CWindowActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWindowActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowActivatedEventArgs@@QEAA@XZ
    CWindowActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWindowActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWindowActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWindowActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowActivatedEventArgs@@UEAAJW4CoreWindowActivationState@Core@UI@Windows@@@Z
    virtual long Initialize(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWindowActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWindowActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CWindowActivatedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowActivationState@CWindowActivatedEventArgs@@UEAAJPEAW4CoreWindowActivationState@Core@UI@Windows@@@Z
    virtual long get_WindowActivationState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CWindowActivatedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 17 member(s).
class CInteractiveObjectButtonInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectButtonInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectButtonInfo@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectButtonInfo@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectButtonInfo@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectButtonInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectButtonInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectButtonInfo@@UEAAJIE@Z
    virtual long RuntimeClassInitialize(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonId@CInteractiveObjectButtonInfo@@UEAAJPEAI@Z
    virtual long get_ButtonId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPressed@CInteractiveObjectButtonInfo@@UEAAJPEAE@Z
    virtual long get_IsPressed(unsigned char *);
};

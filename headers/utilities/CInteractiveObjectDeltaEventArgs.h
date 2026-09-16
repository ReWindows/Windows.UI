#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 27 member(s).
class CInteractiveObjectDeltaEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectDeltaEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectDeltaEventArgs@@QEAA@XZ
    CInteractiveObjectDeltaEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectDeltaEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectDeltaEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectDeltaEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectDeltaEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectDeltaEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectDeltaEventArgs@@UEAAJIINV?$ComPtr@UIInteractiveObjectInfo@Input@Internal@UI@Windows@@@WRL@Microsoft@@@Z
    virtual long RuntimeClassInitialize(unsigned int, unsigned int, double, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentId@CInteractiveObjectDeltaEventArgs@@UEAAJPEAI@Z
    virtual long get_ComponentId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInteractiveObjectInfo@CInteractiveObjectDeltaEventArgs@@UEAAJPEAPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@@Z
    virtual long get_CurrentInteractiveObjectInfo(::Windows::UI::Internal::Input::IInteractiveObjectInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delta@CInteractiveObjectDeltaEventArgs@@UEAAJPEAN@Z
    virtual long get_Delta(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractiveObjectId@CInteractiveObjectDeltaEventArgs@@UEAAJPEAI@Z
    virtual long get_InteractiveObjectId(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectDeltaEventArgs@@UEAA@XZ
    virtual ~CInteractiveObjectDeltaEventArgs();
};

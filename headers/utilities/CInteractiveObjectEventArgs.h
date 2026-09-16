#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
class CInteractiveObjectEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectEventArgs@@QEAA@XZ
    CInteractiveObjectEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectEventArgs@@UEAAJIV?$ComPtr@UIInteractiveObjectInfo@Input@Internal@UI@Windows@@@WRL@Microsoft@@@Z
    virtual long RuntimeClassInitialize(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInteractiveObjectInfo@CInteractiveObjectEventArgs@@UEAAJPEAPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@@Z
    virtual long get_CurrentInteractiveObjectInfo(::Windows::UI::Internal::Input::IInteractiveObjectInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractiveObjectId@CInteractiveObjectEventArgs@@UEAAJPEAI@Z
    virtual long get_InteractiveObjectId(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectEventArgs@@UEAA@XZ
    virtual ~CInteractiveObjectEventArgs();
};

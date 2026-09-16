#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 27 member(s).
class CInteractiveObjectButtonEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectButtonEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectButtonEventArgs@@QEAA@XZ
    CInteractiveObjectButtonEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectButtonEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectButtonEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectButtonEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectButtonEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectButtonEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectButtonEventArgs@@UEAAJIIEV?$ComPtr@UIInteractiveObjectInfo@Input@Internal@UI@Windows@@@WRL@Microsoft@@@Z
    virtual long RuntimeClassInitialize(unsigned int, unsigned int, unsigned char, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonId@CInteractiveObjectButtonEventArgs@@UEAAJPEAI@Z
    virtual long get_ButtonId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInteractiveObjectInfo@CInteractiveObjectButtonEventArgs@@UEAAJPEAPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@@Z
    virtual long get_CurrentInteractiveObjectInfo(::Windows::UI::Internal::Input::IInteractiveObjectInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractiveObjectId@CInteractiveObjectButtonEventArgs@@UEAAJPEAI@Z
    virtual long get_InteractiveObjectId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPressed@CInteractiveObjectButtonEventArgs@@UEAAJPEAE@Z
    virtual long get_IsPressed(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectButtonEventArgs@@UEAA@XZ
    virtual ~CInteractiveObjectButtonEventArgs();
};

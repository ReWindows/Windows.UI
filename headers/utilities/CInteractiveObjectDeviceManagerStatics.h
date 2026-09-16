#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 23 member(s).
class CInteractiveObjectDeviceManagerStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CInteractiveObjectDeviceManagerStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectDeviceManagerStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectDeviceManagerStatics@@QEAA@XZ
    CInteractiveObjectDeviceManagerStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectDeviceManagerStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractiveObjectDeviceManager@CInteractiveObjectDeviceManagerStatics@@UEAAJPEAPEAUIInteractiveObjectDeviceManager@Input@Internal@UI@Windows@@@Z
    virtual long GetInteractiveObjectDeviceManager(::Windows::UI::Internal::Input::IInteractiveObjectDeviceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectDeviceManagerStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectDeviceManagerStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectDeviceManagerStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectDeviceManagerStatics@@UEAAKXZ
    virtual unsigned long Release();
};

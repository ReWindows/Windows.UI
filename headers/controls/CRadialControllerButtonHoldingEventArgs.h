#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 19 member(s).
class CRadialControllerButtonHoldingEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialControllerButtonHoldingEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialControllerButtonHoldingEventArgs@@QEAA@XZ
    CRadialControllerButtonHoldingEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialControllerButtonHoldingEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialControllerButtonHoldingEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialControllerButtonHoldingEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialControllerButtonHoldingEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialControllerButtonHoldingEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRadialControllerButtonHoldingEventArgs@@UEAAJPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@EPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::IInteractiveObjectInfo *, unsigned char, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CRadialControllerButtonHoldingEventArgs@@UEAAJPEAPEAUIRadialControllerScreenContact@Input@UI@Windows@@@Z
    virtual long get_Contact(::Windows::UI::Input::IRadialControllerScreenContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SimpleHapticsController@CRadialControllerButtonHoldingEventArgs@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_SimpleHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialControllerButtonHoldingEventArgs@@UEAA@XZ
    virtual ~CRadialControllerButtonHoldingEventArgs();
};

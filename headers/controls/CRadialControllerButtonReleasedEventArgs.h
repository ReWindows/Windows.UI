#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 19 member(s).
class CRadialControllerButtonReleasedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialControllerButtonReleasedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialControllerButtonReleasedEventArgs@@QEAA@XZ
    CRadialControllerButtonReleasedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialControllerButtonReleasedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialControllerButtonReleasedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialControllerButtonReleasedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialControllerButtonReleasedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialControllerButtonReleasedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRadialControllerButtonReleasedEventArgs@@UEAAJPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@EPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::IInteractiveObjectInfo *, unsigned char, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CRadialControllerButtonReleasedEventArgs@@UEAAJPEAPEAUIRadialControllerScreenContact@Input@UI@Windows@@@Z
    virtual long get_Contact(::Windows::UI::Input::IRadialControllerScreenContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SimpleHapticsController@CRadialControllerButtonReleasedEventArgs@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_SimpleHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialControllerButtonReleasedEventArgs@@UEAA@XZ
    virtual ~CRadialControllerButtonReleasedEventArgs();
};

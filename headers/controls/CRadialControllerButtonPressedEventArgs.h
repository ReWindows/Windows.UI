#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 19 member(s).
class CRadialControllerButtonPressedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialControllerButtonPressedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialControllerButtonPressedEventArgs@@QEAA@XZ
    CRadialControllerButtonPressedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialControllerButtonPressedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialControllerButtonPressedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialControllerButtonPressedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialControllerButtonPressedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialControllerButtonPressedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRadialControllerButtonPressedEventArgs@@UEAAJPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@EPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::IInteractiveObjectInfo *, unsigned char, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CRadialControllerButtonPressedEventArgs@@UEAAJPEAPEAUIRadialControllerScreenContact@Input@UI@Windows@@@Z
    virtual long get_Contact(::Windows::UI::Input::IRadialControllerScreenContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SimpleHapticsController@CRadialControllerButtonPressedEventArgs@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_SimpleHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialControllerButtonPressedEventArgs@@UEAA@XZ
    virtual ~CRadialControllerButtonPressedEventArgs();
};

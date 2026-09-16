#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
class CRadialControllerButtonClickedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialControllerButtonClickedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialControllerButtonClickedEventArgs@@QEAA@XZ
    CRadialControllerButtonClickedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialControllerButtonClickedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialControllerButtonClickedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialControllerButtonClickedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialControllerButtonClickedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialControllerButtonClickedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRadialControllerButtonClickedEventArgs@@UEAAJPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@EPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::IInteractiveObjectInfo *, unsigned char, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CRadialControllerButtonClickedEventArgs@@UEAAJPEAPEAUIRadialControllerScreenContact@Input@UI@Windows@@@Z
    virtual long get_Contact(::Windows::UI::Input::IRadialControllerScreenContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SimpleHapticsController@CRadialControllerButtonClickedEventArgs@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_SimpleHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialControllerButtonClickedEventArgs@@UEAA@XZ
    virtual ~CRadialControllerButtonClickedEventArgs();
};

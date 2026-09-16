#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
class CRadialControllerScreenContactStartedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialControllerScreenContactStartedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialControllerScreenContactStartedEventArgs@@QEAA@XZ
    CRadialControllerScreenContactStartedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialControllerScreenContactStartedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialControllerScreenContactStartedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialControllerScreenContactStartedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialControllerScreenContactStartedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialControllerScreenContactStartedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRadialControllerScreenContactStartedEventArgs@@UEAAJPEAUIInteractiveObjectInfo@Input@Internal@UI@Windows@@EPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(::Windows::UI::Internal::Input::IInteractiveObjectInfo *, unsigned char, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CRadialControllerScreenContactStartedEventArgs@@UEAAJPEAPEAUIRadialControllerScreenContact@Input@UI@Windows@@@Z
    virtual long get_Contact(::Windows::UI::Input::IRadialControllerScreenContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsButtonPressed@CRadialControllerScreenContactStartedEventArgs@@UEAAJPEAE@Z
    virtual long get_IsButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SimpleHapticsController@CRadialControllerScreenContactStartedEventArgs@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_SimpleHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialControllerScreenContactStartedEventArgs@@UEAA@XZ
    virtual ~CRadialControllerScreenContactStartedEventArgs();
};

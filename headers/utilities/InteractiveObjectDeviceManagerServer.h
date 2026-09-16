#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 27 member(s).
class InteractiveObjectDeviceManagerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractiveObjectDeviceManagerServer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractiveObjectDeviceManagerServer@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractiveObjectDevice@InteractiveObjectDeviceManagerServer@@UEAAJIPEAPEAUIInteractiveObjectDevice@Input@Internal@UI@Windows@@@Z
    virtual long GetInteractiveObjectDevice(unsigned int, ::Windows::UI::Internal::Input::IInteractiveObjectDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractiveObjectDeviceExclusive@InteractiveObjectDeviceManagerServer@@UEAAJIEPEAPEAUIInteractiveObjectDevice@Input@Internal@UI@Windows@@@Z
    virtual long GetInteractiveObjectDeviceExclusive(unsigned int, unsigned char, ::Windows::UI::Internal::Input::IInteractiveObjectDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractiveObjectDeviceManagerServer@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractiveObjectDeviceManagerServer@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractiveObjectDeviceManagerServer@@QEAA@XZ
    InteractiveObjectDeviceManagerServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@InteractiveObjectDeviceManagerServer@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@InteractiveObjectDeviceManagerServer@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvents@InteractiveObjectDeviceManagerServer@@UEAAJXZ
    virtual long ProcessEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@InteractiveObjectDeviceManagerServer@@UEAAJPEAUHWND__@@I_K_J@Z
    virtual long ProcessMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractiveObjectDeviceManagerServer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractiveObjectDeviceManagerServer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteractiveObjectDeviceManagerServer@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopProcessingEvents@InteractiveObjectDeviceManagerServer@@UEAAJXZ
    virtual long StopProcessingEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSinkToken@InteractiveObjectDeviceManagerServer@@UEAAJPEA_K@Z
    virtual long get_InputSinkToken(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractiveObjectDeviceManagerServer@@UEAA@XZ
    virtual ~InteractiveObjectDeviceManagerServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMessageOnlyWindow@InteractiveObjectDeviceManagerServer@@AEAAJXZ
    long CreateMessageOnlyWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@InteractiveObjectDeviceManagerServer@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 19 member(s).
namespace Windows::UI::Core {
class PrivateCoreInput {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PrivateCoreInput@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeHostingContext@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAUHWND__@@I@Z
    virtual long ChangeHostingContext(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachInputHandle@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAPEAX@Z
    virtual long DetachInputHandle(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PrivateCoreInput@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PrivateCoreInput@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAXPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(void *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputHandle@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAPEAX@Z
    virtual long get_InputHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowHandle@PrivateCoreInput@Core@UI@Windows@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_WindowHandle(HWND__* *);
};
} // namespace Windows::UI::Core

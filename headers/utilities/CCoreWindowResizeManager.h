#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 29 member(s).
namespace Windows::UI::Core {
class CCoreWindowResizeManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCoreWindowResizeManager@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResizeDCompSynchronizationObject@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJPEAPEAX@Z
    virtual long GetResizeDCompSynchronizationObject(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CCoreWindowResizeManager@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CCoreWindowResizeManager@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutCompleted@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJXZ
    virtual long NotifyLayoutCompleted();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCoreWindowResizeManager@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldWaitForLayoutCompletion@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_ShouldWaitForLayoutCompletion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SynchronizedResize@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_SynchronizedResize(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShouldWaitForLayoutCompletion@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJE@Z
    virtual long put_ShouldWaitForLayoutCompletion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SynchronizedResize@CCoreWindowResizeManager@Core@UI@Windows@@UEAAJE@Z
    virtual long put_SynchronizedResize(unsigned char);
};
} // namespace Windows::UI::Core

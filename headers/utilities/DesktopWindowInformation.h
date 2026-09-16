#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 17 member(s).
namespace Windows::UI::Core {
class DesktopWindowInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesktopWindowInformation@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesktopWindowInformation@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesktopWindowInformation@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesktopWindowInformation@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesktopWindowInformation@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesktopWindowInformation@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hwnd@DesktopWindowInformation@Core@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_Hwnd(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@DesktopWindowInformation@Core@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewInstanceId@DesktopWindowInformation@Core@UI@Windows@@UEAAJPEAI@Z
    virtual long get_ViewInstanceId(unsigned int *);
};
} // namespace Windows::UI::Core

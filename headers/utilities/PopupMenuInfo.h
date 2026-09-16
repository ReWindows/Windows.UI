#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 13 member(s).
namespace Windows::UI::Internal::Popups {
class PopupMenuInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PopupMenuInfo@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PopupMenuInfo@Popups@Internal@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PopupMenuInfo@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PopupMenuInfo@Popups@Internal@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PopupMenuInfo@Popups@Internal@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PopupMenuInfo@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@PopupMenuInfo@Popups@Internal@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Commands(WindissectOpaque * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupMenuInfo@Popups@Internal@UI@Windows@@EEAA@XZ
    virtual ~PopupMenuInfo();
};
} // namespace Windows::UI::Internal::Popups

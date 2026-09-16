#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 18 member(s).
namespace Windows::UI::Internal::Popups {
class MessageDialogInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelCommandIndex@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAI@Z
    virtual long get_CancelCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@5@@Z
    virtual long get_Commands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Content(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultCommandIndex@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAI@Z
    virtual long get_DefaultCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Options@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAW4MessageDialogOptions@245@@Z
    virtual long get_Options(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@MessageDialogInfo@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageDialogInfo@Popups@Internal@UI@Windows@@UEAA@XZ
    virtual ~MessageDialogInfo();
};
} // namespace Windows::UI::Internal::Popups

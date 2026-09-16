#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 12 member(s).
namespace Windows::UI::Internal::Popups {
class MessageDialogOperationCompletedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MessageDialogOperationCompletedEventArgs@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MessageDialogOperationCompletedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MessageDialogOperationCompletedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MessageDialogOperationCompletedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MessageDialogOperationCompletedEventArgs@Popups@Internal@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MessageDialogOperationCompletedEventArgs@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCanceled@MessageDialogOperationCompletedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsCanceled(unsigned char *);
};
} // namespace Windows::UI::Internal::Popups

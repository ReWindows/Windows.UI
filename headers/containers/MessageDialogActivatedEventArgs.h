#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 108 member(s).
namespace Windows::UI::Internal::Popups {
class MessageDialogActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@QEAA@XZ
    MessageDialogActivatedEventArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Operation@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAPEAUIMessageDialogOperation@MessageDialogExperience@PlatformExtensions@35@@Z
    virtual long get_Operation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileActivatedInfo@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAPEAUITileActivatedInfo@Activation@ApplicationModel@5@@Z
    virtual long get_TileActivatedInfo(::Windows::ApplicationModel::Activation::ITileActivatedInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageDialogActivatedEventArgs@Popups@Internal@UI@Windows@@UEAA@XZ
    virtual ~MessageDialogActivatedEventArgs();
};
} // namespace Windows::UI::Internal::Popups

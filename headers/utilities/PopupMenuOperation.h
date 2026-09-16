#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
namespace Windows::UI::Internal::Popups {
class PopupMenuOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Completed@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJXZ
    virtual long Completed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PopupMenuOperation@Popups@Internal@UI@Windows@@QEAA@XZ
    PopupMenuOperation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OperationCompleted@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVPopupMenuOperation@PopupMenuExperience@PlatformExtensions@Internal@Windows@@PEAVPopupMenuOperationCompletedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OperationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerWindowId@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@35@@Z
    virtual long get_CallerWindowId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Info@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAPEAUIPopupMenuInfo@PopupMenuExperience@PlatformExtensions@35@@Z
    virtual long get_Info(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCompleted@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsCompleted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAW4Placement@245@@Z
    virtual long get_Placement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAUPoint@Foundation@5@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Rect@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAURect@Foundation@5@@Z
    virtual long get_Rect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedCommand@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAPEAUIUICommand@245@@Z
    virtual long get_SelectedCommand(::Windows::UI::Popups::IUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedCommand@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJPEAUIUICommand@245@@Z
    virtual long put_SelectedCommand(::Windows::UI::Popups::IUICommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OperationCompleted@PopupMenuOperation@Popups@Internal@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OperationCompleted(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@PopupMenuOperation@Popups@Internal@UI@Windows@@AEAAJE@Z
    long OperationCompleted(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupMenuOperation@Popups@Internal@UI@Windows@@EEAA@XZ
    virtual ~PopupMenuOperation();
};
} // namespace Windows::UI::Internal::Popups

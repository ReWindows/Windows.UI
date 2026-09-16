#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
namespace Windows::UI::Internal::Popups {
class MessageDialogOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Completed@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJXZ
    virtual long Completed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageDialogOperation@Popups@Internal@UI@Windows@@QEAA@XZ
    MessageDialogOperation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OperationCompleted@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVMessageDialogOperation@MessageDialogExperience@PlatformExtensions@Internal@Windows@@PEAVMessageDialogOperationCompletedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_OperationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationArgs@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAPEAUIMessageDialogActivatedEventArgs@MessageDialogExperience@PlatformExtensions@35@@Z
    virtual long get_ActivationArgs(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerProcessId@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAI@Z
    virtual long get_CallerProcessId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerWindowId@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAUWindowId@WindowManagement@ApplicationModel@35@@Z
    virtual long get_CallerWindowId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Info@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAPEAUIMessageDialogInfo@MessageDialogExperience@PlatformExtensions@35@@Z
    virtual long get_Info(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCompleted@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsCompleted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedCommand@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAPEAUIUICommand@245@@Z
    virtual long get_SelectedCommand(::Windows::UI::Popups::IUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedCommand@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJPEAUIUICommand@245@@Z
    virtual long put_SelectedCommand(::Windows::UI::Popups::IUICommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OperationCompleted@MessageDialogOperation@Popups@Internal@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OperationCompleted(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageDialogOperation@Popups@Internal@UI@Windows@@UEAA@XZ
    virtual ~MessageDialogOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OperationCompleted@MessageDialogOperation@Popups@Internal@UI@Windows@@AEAAJE@Z
    long OperationCompleted(unsigned char);
};
} // namespace Windows::UI::Internal::Popups

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 57 member(s).
namespace Windows::UI::Input {
class PhysicalGestureRecognizerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGesture@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJXZ
    virtual long CompleteGesture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PhysicalGestureRecognizerServer@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PhysicalGestureRecognizerServer@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PhysicalGestureRecognizerServer@Input@UI@Windows@@QEAA@XZ
    PhysicalGestureRecognizerServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDownEvent@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUIPointerPoint@234@@Z
    virtual long ProcessDownEvent(::Windows::UI::Input::IPointerPoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMoveEvents@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long ProcessMoveEvents(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpEvent@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUIPointerPoint@234@@Z
    virtual long ProcessUpEvent(::Windows::UI::Input::IPointerPoint *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Holding@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVPhysicalGestureRecognizer@Input@UI@Windows@@PEAVHoldingEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Holding(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationCompleted@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVPhysicalGestureRecognizer@Input@UI@Windows@@PEAVManipulationCompletedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationStarted@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVPhysicalGestureRecognizer@Input@UI@Windows@@PEAVManipulationStartedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationUpdated@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVPhysicalGestureRecognizer@Input@UI@Windows@@PEAVManipulationUpdatedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Tapped@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVPhysicalGestureRecognizer@Input@UI@Windows@@PEAVTappedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Tapped(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureSettings@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAW4GestureSettings@234@@Z
    virtual long get_GestureSettings(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldMaxContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_HoldMaxContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldMinContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_HoldMinContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldRadius@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_HoldRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldStartDelay@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@4@@Z
    virtual long get_HoldStartDelay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActive@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TapMaxContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TapMaxContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TapMinContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TapMinContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TranslationMaxContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TranslationMaxContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TranslationMinContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TranslationMinContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureSettings@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJW4GestureSettings@234@@Z
    virtual long put_GestureSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldMaxContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_HoldMaxContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldMinContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_HoldMinContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldRadius@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_HoldRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldStartDelay@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJUTimeSpan@Foundation@4@@Z
    virtual long put_HoldStartDelay(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TapMaxContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TapMaxContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TapMinContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TapMinContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslationMaxContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TranslationMaxContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslationMinContactCount@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TranslationMinContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Holding@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Holding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationCompleted@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationStarted@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationUpdated@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationUpdated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Tapped@PhysicalGestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Tapped(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@PhysicalGestureRecognizerServer@Input@UI@Windows@@AEAAJPEAUIGestureRecognizer@234@PEAUIHoldingEventArgs@234@@Z
    long OnHolding(::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IHoldingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@PhysicalGestureRecognizerServer@Input@UI@Windows@@AEAAJPEAUIGestureRecognizer@234@PEAUIManipulationCompletedEventArgs@234@@Z
    long OnManipulationCompleted(::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@PhysicalGestureRecognizerServer@Input@UI@Windows@@AEAAJPEAUIGestureRecognizer@234@PEAUIManipulationStartedEventArgs@234@@Z
    long OnManipulationStarted(::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationStartedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationUpdated@PhysicalGestureRecognizerServer@Input@UI@Windows@@AEAAJPEAUIGestureRecognizer@234@PEAUIManipulationUpdatedEventArgs@234@@Z
    long OnManipulationUpdated(::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::IManipulationUpdatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@PhysicalGestureRecognizerServer@Input@UI@Windows@@AEAAJPEAUIGestureRecognizer@234@PEAUITappedEventArgs@234@@Z
    long OnTapped(::Windows::UI::Input::IGestureRecognizer *, ::Windows::UI::Input::ITappedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PhysicalGestureRecognizerServer@Input@UI@Windows@@EEAA@XZ
    virtual ~PhysicalGestureRecognizerServer();
};
} // namespace Windows::UI::Input

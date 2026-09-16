#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 63 member(s).
class CRadialController {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialController@@QEAA@XZ
    CRadialController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialController@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialController@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialController@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonHolding@CRadialController@@QEAAJPEAUIInteractiveObjectButtonCapabilities@Input@Internal@UI@Windows@@PEAUIInteractiveObjectButtonEventArgs@3456@@Z
    long OnButtonHolding(::Windows::UI::Internal::Input::IInteractiveObjectButtonCapabilities *, ::Windows::UI::Internal::Input::IInteractiveObjectButtonEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPressed@CRadialController@@QEAAJPEAUIInteractiveObjectButtonCapabilities@Input@Internal@UI@Windows@@PEAUIInteractiveObjectButtonEventArgs@3456@@Z
    long OnButtonPressed(::Windows::UI::Internal::Input::IInteractiveObjectButtonCapabilities *, ::Windows::UI::Internal::Input::IInteractiveObjectButtonEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonReleased@CRadialController@@QEAAJPEAUIInteractiveObjectButtonCapabilities@Input@Internal@UI@Windows@@PEAUIInteractiveObjectButtonEventArgs@3456@@Z
    long OnButtonReleased(::Windows::UI::Internal::Input::IInteractiveObjectButtonCapabilities *, ::Windows::UI::Internal::Input::IInteractiveObjectButtonEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControlAcquired@CRadialController@@QEAAJPEAUIInteractiveObjectDevice@Input@Internal@UI@Windows@@PEAUIInteractiveObjectEventArgs@3456@@Z
    long OnControlAcquired(::Windows::UI::Internal::Input::IInteractiveObjectDevice *, ::Windows::UI::Internal::Input::IInteractiveObjectEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRotationChanged@CRadialController@@QEAAJPEAUIInteractiveObjectDialCapabilities@Input@Internal@UI@Windows@@PEAUIInteractiveObjectDeltaEventArgs@3456@@Z
    long OnRotationChanged(::Windows::UI::Internal::Input::IInteractiveObjectDialCapabilities *, ::Windows::UI::Internal::Input::IInteractiveObjectDeltaEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScreenContactContinued@CRadialController@@QEAAJPEAUIInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAUIInteractiveObjectEventArgs@3456@@Z
    long OnScreenContactContinued(::Windows::UI::Internal::Input::IInteractiveObjectPointerCapabilities *, ::Windows::UI::Internal::Input::IInteractiveObjectEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScreenContactEnded@CRadialController@@QEAAJPEAUIInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAUIInteractiveObjectEventArgs@3456@@Z
    long OnScreenContactEnded(::Windows::UI::Internal::Input::IInteractiveObjectPointerCapabilities *, ::Windows::UI::Internal::Input::IInteractiveObjectEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScreenContactStarted@CRadialController@@QEAAJPEAUIInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAUIInteractiveObjectEventArgs@3456@@Z
    long OnScreenContactStarted(::Windows::UI::Internal::Input::IInteractiveObjectPointerCapabilities *, ::Windows::UI::Internal::Input::IInteractiveObjectEventArgs *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRadialController@@UEAAJEPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(unsigned char, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonClicked@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerButtonClickedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonClicked(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonHolding@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerButtonHoldingEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonHolding(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonPressed@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerButtonPressedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonReleased@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerButtonReleasedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ControlAcquired@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerControlAcquiredEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ControlAcquired(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ControlLost@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ControlLost(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RotationChanged@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerRotationChangedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_RotationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScreenContactContinued@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerScreenContactContinuedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ScreenContactContinued(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScreenContactEnded@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ScreenContactEnded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScreenContactStarted@CRadialController@@UEAAJPEAU?$ITypedEventHandler@PEAVRadialController@Input@UI@Windows@@PEAVRadialControllerScreenContactStartedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ScreenContactStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSink@CRadialController@@UEAAJPEA_K@Z
    virtual long get_InputSink(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Menu@CRadialController@@UEAAJPEAPEAUIRadialControllerMenu@Input@UI@Windows@@@Z
    virtual long get_Menu(::Windows::UI::Input::IRadialControllerMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationResolutionInDegrees@CRadialController@@UEAAJPEAN@Z
    virtual long get_RotationResolutionInDegrees(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UseAutomaticHapticFeedback@CRadialController@@UEAAJPEAE@Z
    virtual long get_UseAutomaticHapticFeedback(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationResolutionInDegrees@CRadialController@@UEAAJN@Z
    virtual long put_RotationResolutionInDegrees(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UseAutomaticHapticFeedback@CRadialController@@UEAAJE@Z
    virtual long put_UseAutomaticHapticFeedback(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonClicked@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonClicked(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonHolding@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonHolding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonPressed@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonReleased@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ControlAcquired@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ControlAcquired(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ControlLost@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ControlLost(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RotationChanged@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RotationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScreenContactContinued@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScreenContactContinued(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScreenContactEnded@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScreenContactEnded(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScreenContactStarted@CRadialController@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScreenContactStarted(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialController@@UEAA@XZ
    virtual ~CRadialController();
};

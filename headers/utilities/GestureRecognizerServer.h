#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 146 member(s).
namespace Windows::UI::Input {
class GestureRecognizerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GestureRecognizerServer@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeDoubleTap@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUIPointerPoint@234@PEAE@Z
    virtual long CanBeDoubleTap(::Windows::UI::Input::IPointerPoint *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGesture@GestureRecognizerServer@Input@UI@Windows@@UEAAJXZ
    virtual long CompleteGesture();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GestureRecognizerServer@Input@UI@Windows@@QEAA@XZ
    GestureRecognizerServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@GestureRecognizerServer@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@GestureRecognizerServer@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDownEvent@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUIPointerPoint@234@@Z
    virtual long ProcessDownEvent(::Windows::UI::Input::IPointerPoint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInertia@GestureRecognizerServer@Input@UI@Windows@@UEAAJXZ
    virtual long ProcessInertia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMouseWheelEvent@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUIPointerPoint@234@EE@Z
    virtual long ProcessMouseWheelEvent(::Windows::UI::Input::IPointerPoint *, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMoveEvents@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long ProcessMoveEvents(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpEvent@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUIPointerPoint@234@@Z
    virtual long ProcessUpEvent(::Windows::UI::Input::IPointerPoint *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GestureRecognizerServer@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GestureRecognizerServer@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GestureRecognizerServer@Input@UI@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMeasurementUnits@GestureRecognizerServer@Input@UI@Windows@@UEAAJW4MeasurementUnits@234@@Z
    virtual long SetMeasurementUnits(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CrossSliding@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVCrossSlidingEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_CrossSliding(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Dragging@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVDraggingEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Dragging(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Holding@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVHoldingEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Holding(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationCompleted@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVManipulationCompletedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationInertiaStarting@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVManipulationInertiaStartingEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationInertiaStarting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationStarted@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVManipulationStartedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ManipulationUpdated@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVManipulationUpdatedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ManipulationUpdated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RightTapped@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVRightTappedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_RightTapped(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Tapped@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGestureRecognizer@Input@UI@Windows@@PEAVTappedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Tapped(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoProcessInertia@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_AutoProcessInertia(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CrossSlideExact@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_CrossSlideExact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CrossSlideHorizontally@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_CrossSlideHorizontally(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CrossSlideThresholds@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUCrossSlideThresholds@234@@Z
    virtual long get_CrossSlideThresholds(::Windows::UI::Input::CrossSlideThresholds *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GestureSettings@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAW4GestureSettings@234@@Z
    virtual long get_GestureSettings(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldMaxContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_HoldMaxContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldMinContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_HoldMinContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldRadius@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_HoldRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldStartDelay@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUTimeSpan@Foundation@4@@Z
    virtual long get_HoldStartDelay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InertiaExpansion@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InertiaExpansion(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InertiaExpansionDeceleration@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InertiaExpansionDeceleration(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InertiaRotationAngle@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InertiaRotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InertiaRotationDeceleration@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InertiaRotationDeceleration(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InertiaTranslationDeceleration@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InertiaTranslationDeceleration(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InertiaTranslationDisplacement@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InertiaTranslationDisplacement(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActive@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertial@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInertial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ManipulationExact@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_ManipulationExact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MouseWheelParameters@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAPEAUIMouseWheelParameters@234@@Z
    virtual long get_MouseWheelParameters(::Windows::UI::Input::IMouseWheelParameters * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PivotCenter@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_PivotCenter(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PivotRadius@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_PivotRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowGestureFeedback@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_ShowGestureFeedback(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TapMaxContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TapMaxContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TapMinContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TapMinContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TranslationMaxContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TranslationMaxContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TranslationMinContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TranslationMinContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoProcessInertia@GestureRecognizerServer@Input@UI@Windows@@UEAAJE@Z
    virtual long put_AutoProcessInertia(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CrossSlideExact@GestureRecognizerServer@Input@UI@Windows@@UEAAJE@Z
    virtual long put_CrossSlideExact(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CrossSlideHorizontally@GestureRecognizerServer@Input@UI@Windows@@UEAAJE@Z
    virtual long put_CrossSlideHorizontally(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CrossSlideThresholds@GestureRecognizerServer@Input@UI@Windows@@UEAAJUCrossSlideThresholds@234@@Z
    virtual long put_CrossSlideThresholds(::Windows::UI::Input::CrossSlideThresholds);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_GestureSettings@GestureRecognizerServer@Input@UI@Windows@@UEAAJW4GestureSettings@234@@Z
    virtual long put_GestureSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldMaxContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_HoldMaxContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldMinContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_HoldMinContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldRadius@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_HoldRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HoldStartDelay@GestureRecognizerServer@Input@UI@Windows@@UEAAJUTimeSpan@Foundation@4@@Z
    virtual long put_HoldStartDelay(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InertiaExpansion@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_InertiaExpansion(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InertiaExpansionDeceleration@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_InertiaExpansionDeceleration(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InertiaRotationAngle@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_InertiaRotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InertiaRotationDeceleration@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_InertiaRotationDeceleration(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InertiaTranslationDeceleration@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_InertiaTranslationDeceleration(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InertiaTranslationDisplacement@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_InertiaTranslationDisplacement(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ManipulationExact@GestureRecognizerServer@Input@UI@Windows@@UEAAJE@Z
    virtual long put_ManipulationExact(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PivotCenter@GestureRecognizerServer@Input@UI@Windows@@UEAAJUPoint@Foundation@4@@Z
    virtual long put_PivotCenter(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PivotRadius@GestureRecognizerServer@Input@UI@Windows@@UEAAJM@Z
    virtual long put_PivotRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowGestureFeedback@GestureRecognizerServer@Input@UI@Windows@@UEAAJE@Z
    virtual long put_ShowGestureFeedback(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TapMaxContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TapMaxContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TapMinContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TapMinContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslationMaxContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TranslationMaxContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TranslationMinContactCount@GestureRecognizerServer@Input@UI@Windows@@UEAAJI@Z
    virtual long put_TranslationMinContactCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CrossSliding@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CrossSliding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Dragging@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Dragging(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Holding@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Holding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationCompleted@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationInertiaStarting@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationInertiaStarting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationStarted@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ManipulationUpdated@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ManipulationUpdated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RightTapped@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RightTapped(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Tapped@GestureRecognizerServer@Input@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Tapped(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActivePointer@GestureRecognizerServer@Input@UI@Windows@@AEAAJII@Z
    long AddActivePointer(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTimer@GestureRecognizerServer@Input@UI@Windows@@CA_KPEAV1234@@Z
    static uint64_t AddTimer(::Windows::UI::Input::GestureRecognizerServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoInertiaTimerCallback@GestureRecognizerServer@Input@UI@Windows@@CAXPEAUHWND__@@I_KK@Z
    static void AutoInertiaTimerCallback(HWND__*, unsigned int, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCurrentTransform@GestureRecognizerServer@Input@UI@Windows@@AEAAXXZ
    void ClearCurrentTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitBufferedPointers@GestureRecognizerServer@Input@UI@Windows@@AEAAHIIE@Z
    int CommitBufferedPointers(unsigned int, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDirtyInertiaSettings@GestureRecognizerServer@Input@UI@Windows@@AEAAXXZ
    void CommitDirtyInertiaSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDirtyMouseWheelSettings@GestureRecognizerServer@Input@UI@Windows@@AEAAXXZ
    void CommitDirtyMouseWheelSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDirtySettings@GestureRecognizerServer@Input@UI@Windows@@AEAAXXZ
    void CommitDirtySettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteGestureInternal@GestureRecognizerServer@Input@UI@Windows@@AEAAJ_K@Z
    long CompleteGestureInternal(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertCrossSlideValuesToIC@GestureRecognizerServer@Input@UI@Windows@@AEAAJUCrossSlideThresholds@234@PEAUCROSS_SLIDE_PARAMETER@@AEAI@Z
    long ConvertCrossSlideValuesToIC(::Windows::UI::Input::CrossSlideThresholds, CROSS_SLIDE_PARAMETER *, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDipValueToIcValue@GestureRecognizerServer@Input@UI@Windows@@AEAAJMW4tagCONVERSION@@PEAM@Z
    long ConvertDipValueToIcValue(float, int, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertIcValueToDipValue@GestureRecognizerServer@Input@UI@Windows@@AEAAJMW4tagCONVERSION@@PEAM@Z
    long ConvertIcValueToDipValue(float, int, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertPointDipsToIc@GestureRecognizerServer@Input@UI@Windows@@AEAAJPEBUPoint@Foundation@4@PEAU564@@Z
    long ConvertPointDipsToIc(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertPointIcToDips@GestureRecognizerServer@Input@UI@Windows@@AEAAJPEBUPoint@Foundation@4@PEAU564@@Z
    long ConvertPointIcToDips(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertValueInDirection@GestureRecognizerServer@Input@UI@Windows@@AEAAJMW4tagDIRECTION@@EPEAM@Z
    long ConvertValueInDirection(float, int, unsigned char, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertValueWorker@GestureRecognizerServer@Input@UI@Windows@@AEAAJMW4tagCONVERSION@@EPEAM@Z
    long ConvertValueWorker(float, int, unsigned char, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertVectorDipsToIc@GestureRecognizerServer@Input@UI@Windows@@AEAAJPEBUPoint@Foundation@4@PEAU564@@Z
    long ConvertVectorDipsToIc(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertVectorIcToDips@GestureRecognizerServer@Input@UI@Windows@@AEAAJPEBUPoint@Foundation@4@PEAU564@@Z
    long ConvertVectorIcToDips(WindissectOpaque const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetICCallbackManipulationDelta@GestureRecognizerServer@Input@UI@Windows@@AEAA?AUManipulationDelta@234@UMANIPULATION_TRANSFORM@@_N@Z
    ::Windows::UI::Input::ManipulationDelta GetICCallbackManipulationDelta(MANIPULATION_TRANSFORM, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetICCallbackManipulationVelocities@GestureRecognizerServer@Input@UI@Windows@@AEAA?AUManipulationVelocities@234@UMANIPULATION_VELOCITY@@@Z
    ::Windows::UI::Input::ManipulationVelocities GetICCallbackManipulationVelocities(MANIPULATION_VELOCITY);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInverseTransformedPoint@GestureRecognizerServer@Input@UI@Windows@@AEAAJAEAV?$ComPtr@UIPointerPointTransform@Input@UI@Windows@@@WRL@Microsoft@@UPoint@Foundation@4@PEAU894@@Z
    long GetInverseTransformedPoint(WindissectOpaque &, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrthVector@GestureRecognizerServer@Input@UI@Windows@@AEBAJW4tagDIRECTION@@PEAM1@Z
    long GetOrthVector(int, float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDeviceType@GestureRecognizerServer@Input@UI@Windows@@CA?AW4PointerDeviceType@2Devices@4@K@Z
    static int GetPointerDeviceType(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerInfo@GestureRecognizerServer@Input@UI@Windows@@AEAAJPEAUIPointerPoint@234@PEAUtagPOINTER_INFO@@@Z
    long GetPointerInfo(::Windows::UI::Input::IPointerPoint *, tagPOINTER_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerTypeInfo@GestureRecognizerServer@Input@UI@Windows@@AEAAJPEAUIPointerPoint@234@PEAUtagPOINTER_TYPE_INFO@@@Z
    long GetPointerTypeInfo(::Windows::UI::Input::IPointerPoint *, tagPOINTER_TYPE_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHorizontalCrossSlide@GestureRecognizerServer@Input@UI@Windows@@AEAAHXZ
    int IsHorizontalCrossSlide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MustCacheSettings@GestureRecognizerServer@Input@UI@Windows@@AEAAHXZ
    int MustCacheSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCrossSlidingEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@W4CrossSlidingState@234@I@Z
    void OnCrossSlidingEvent(int, WindissectOpaque, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDraggingEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@W4DraggingState@234@I@Z
    void OnDraggingEvent(int, WindissectOpaque, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHoldingEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@W4HoldingState@234@II@Z
    void OnHoldingEvent(int, WindissectOpaque, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompletedEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@UManipulationDelta@234@UManipulationVelocities@234@II@Z
    void OnManipulationCompletedEvent(int, WindissectOpaque, ::Windows::UI::Input::ManipulationDelta, ::Windows::UI::Input::ManipulationVelocities, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationInertiaStartingEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@UManipulationDelta@234@2UManipulationVelocities@234@I@Z
    void OnManipulationInertiaStartingEvent(int, WindissectOpaque, ::Windows::UI::Input::ManipulationDelta, ::Windows::UI::Input::ManipulationDelta, ::Windows::UI::Input::ManipulationVelocities, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStartedEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@UManipulationDelta@234@I@Z
    void OnManipulationStartedEvent(int, WindissectOpaque, ::Windows::UI::Input::ManipulationDelta, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationUpdatedEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@UManipulationDelta@234@2UManipulationVelocities@234@II@Z
    void OnManipulationUpdatedEvent(int, WindissectOpaque, ::Windows::UI::Input::ManipulationDelta, ::Windows::UI::Input::ManipulationDelta, ::Windows::UI::Input::ManipulationVelocities, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOutput@GestureRecognizerServer@Input@UI@Windows@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT2@@@Z
    void OnOutput(INTERACTION_CONTEXT_OUTPUT2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@I@Z
    void OnRightTappedEvent(int, WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTappedEvent@GestureRecognizerServer@Input@UI@Windows@@AEAAXW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@II@Z
    void OnTappedEvent(int, WindissectOpaque, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutputCallback@GestureRecognizerServer@Input@UI@Windows@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT2@@@Z
    static void OutputCallback(void *, INTERACTION_CONTEXT_OUTPUT2const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostICCallbackProcessing@GestureRecognizerServer@Input@UI@Windows@@AEAAXPEAJ@Z
    void PostICCallbackProcessing(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInertiaInternal@GestureRecognizerServer@Input@UI@Windows@@AEAAJ_K@Z
    long ProcessInertiaInternal(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryTimer@GestureRecognizerServer@Input@UI@Windows@@CAPEAV1234@_K@Z
    static ::Windows::UI::Input::GestureRecognizerServer * QueryTimer(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshCurrentTransform@GestureRecognizerServer@Input@UI@Windows@@AEAAX_N@Z
    void RefreshCurrentTransform(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveActivePointer@GestureRecognizerServer@Input@UI@Windows@@AEAAJI@Z
    long RemoveActivePointer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTimer@GestureRecognizerServer@Input@UI@Windows@@CAX_KH@Z
    static void RemoveTimer(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetConfigurationFlag@GestureRecognizerServer@Input@UI@Windows@@AEAAJW4INTERACTION_ID@@W4INTERACTION_CONFIGURATION_FLAGS@@PEAE@Z
    long _GetConfigurationFlag(int, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PutConfigurationFlag@GestureRecognizerServer@Input@UI@Windows@@AEAAJW4INTERACTION_ID@@W4INTERACTION_CONFIGURATION_FLAGS@@E@Z
    long _PutConfigurationFlag(int, int, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GestureRecognizerServer@Input@UI@Windows@@EEAA@XZ
    virtual ~GestureRecognizerServer();
};
} // namespace Windows::UI::Input

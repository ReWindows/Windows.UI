#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 569 member(s).
namespace Windows::UI::Core {
class WindowServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long Activate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@WindowServer@Core@UI@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long Add(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WindowServer@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachInputDelegationInputObject@WindowServer@Core@UI@Windows@@QEAAXPEAUHWND__@@@Z
    void AttachInputDelegationInputObject(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachWindowsMessageDeliveryInputObject@WindowServer@Core@UI@Windows@@QEAAXPEAUHWND__@@@Z
    void AttachWindowsMessageDeliveryInputObject(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentDisplayInformationBehavior@WindowServer@Core@UI@Windows@@UEAAJW4ComponentDisplayInformationBehavior@234@@Z
    virtual long ConfigureComponentDisplayInformationBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentInput@WindowServer@Core@UI@Windows@@UEAAJIPEAUHWND__@@PEAUIUnknown@@@Z
    virtual long ConfigureComponentInput(unsigned int, HWND__*, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureCompositionIsland@WindowServer@Core@UI@Windows@@UEAAJPEAUICompositor@Composition@34@PEAPEAUIVisualTreeIsland@634@@Z
    virtual long ConfigureCompositionIsland(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::IVisualTreeIsland * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureGetBoundsBehavior@WindowServer@Core@UI@Windows@@UEAAJW4GetBoundsBehavior@234@@Z
    virtual long ConfigureGetBoundsBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureHostRightsForComponent@WindowServer@Core@UI@Windows@@UEAAJW4HostRightFlags@234@0@Z
    virtual long ConfigureHostRightsForComponent(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureInputDelegationByProcess@WindowServer@Core@UI@Windows@@UEAAJIE@Z
    virtual long ConfigureInputDelegationByProcess(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureInputDelegationByView@WindowServer@Core@UI@Windows@@UEAAJIE@Z
    virtual long ConfigureInputDelegationByView(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureInputDelegationToInputApp@WindowServer@Core@UI@Windows@@UEAAJIE@Z
    virtual long ConfigureInputDelegationToInputApp(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureNonSpatialInputDelegation@WindowServer@Core@UI@Windows@@UEAAJIE@Z
    virtual long ConfigureNonSpatialInputDelegation(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureSetFocusBehaviorOnWindowActivated@WindowServer@Core@UI@Windows@@UEAAJW4SetFocusBehavior@234@@Z
    virtual long ConfigureSetFocusBehaviorOnWindowActivated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateActivationController@WindowServer@Core@UI@Windows@@QEAAJPEAUHWND__@@@Z
    long CreateActivationController(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultCursor@WindowServer@Core@UI@Windows@@QEAAXXZ
    void CreateDefaultCursor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputSite@WindowServer@Core@UI@Windows@@QEAAJPEAUHWND__@@@Z
    long CreateInputSite(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNavigationFocusEventArgs@WindowServer@Core@UI@Windows@@UEAAJW4NavigationReason@234@URect@Foundation@4@PEAPEAUINavigationFocusEventArgs@234@@Z
    virtual long CreateNavigationFocusEventArgs(int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewWindow@WindowServer@Core@UI@Windows@@QEAAJKPEBGKURect@Foundation@4@W4ZBID@@K@Z
    long CreateNewWindow(unsigned long, unsigned short const *, unsigned long, WindissectOpaque, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferSuspendingWork@WindowServer@Core@UI@Windows@@QEAA_NI_K_J@Z
    bool DeferSuspendingWork(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocus@WindowServer@Core@UI@Windows@@UEAAJPEAUINavigationFocusEventArgs@234@@Z
    virtual long DepartFocus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocus@WindowServer@Core@UI@Windows@@UEAAJW4FocusDirection@234@@Z
    virtual long DepartFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocusAsync@WindowServer@Core@UI@Windows@@UEAAJPEAUINavigationFocusEventArgs@234@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long DepartFocusAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DepartFocusComplete@WindowServer@Core@UI@Windows@@UEAAJU_GUID@@E@Z
    virtual long DepartFocusComplete(_GUID, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCompositionIsland@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long DestroyCompositionIsland();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectComposition@WindowServer@Core@UI@Windows@@QEAAXXZ
    void DisconnectComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@WindowServer@Core@UI@Windows@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindow@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long EnableWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGameMode@WindowServer@Core@UI@Windows@@QEAAXXZ
    void EnsureGameMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteOnCoreWindowThread@WindowServer@Core@UI@Windows@@UEAAJPEAUIDispatchedHandler@234@@Z
    virtual long ExecuteOnCoreWindowThread(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsyncKeyState@WindowServer@Core@UI@Windows@@UEAAJW4VirtualKey@System@4@PEAW4CoreVirtualKeyStates@234@@Z
    virtual long GetAsyncKeyState(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionRoot@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIVisual@Composition@34@@Z
    virtual long GetCompositionRoot(::Windows::UI::Composition::IVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionRoot_Internal@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual@@@Z
    virtual long GetCompositionRoot_Internal(IDCompositionVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCursor@WindowServer@Core@UI@Windows@@QEAAJPEAPEAUHICON__@@@Z
    long GetCurrentCursor(HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentKeyEventDeviceId@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetCurrentKeyEventDeviceId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForOwningThread@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUICoreWindow@234@@Z
    virtual long GetForOwningThread(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WindowServer@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsComponent@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long GetIsComponent(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyState@WindowServer@Core@UI@Windows@@UEAAJW4VirtualKey@System@4@PEAW4CoreVirtualKeyStates@234@@Z
    virtual long GetKeyState(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@WindowServer@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateCoreInput@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetPrivateCoreInput(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessAppContainerSid@WindowServer@Core@UI@Windows@@QEAAJKPEAPEAU_TOKEN_APPCONTAINER_INFORMATION@@@Z
    long GetProcessAppContainerSid(unsigned long, _TOKEN_APPCONTAINER_INFORMATION * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WindowServer@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@WindowServer@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAXK1KPEAU5@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@WindowServer@Core@UI@Windows@@UEAAJPEAI@Z
    virtual long GetViewInstanceId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowForThread@WindowServer@Core@UI@Windows@@SAHPEAPEAUICoreWindow@234@@Z
    static int GetWindowForThread(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowForThreadId@WindowServer@Core@UI@Windows@@SAHKPEAPEAUICoreWindow@234@@Z
    static int GetWindowForThreadId(unsigned long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRawInputKeyboard@WindowServer@Core@UI@Windows@@QEAAXPEAXAEBUtagRAWKEYBOARD@@@Z
    void HandleRawInputKeyboard(void *, tagRAWKEYBOARD const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRawInputMouse@WindowServer@Core@UI@Windows@@QEAAXPEAXAEBUtagRAWMOUSE@@@Z
    void HandleRawInputMouse(void *, tagRAWMOUSE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSecret@WindowServer@Core@UI@Windows@@QEAAJXZ
    long InitSecret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WindowServer@Core@UI@Windows@@UEAAJW4CoreWindowType@234@PEAUHWND__@@PEAVCDispatcher@234@EKK@Z
    virtual long Initialize(int, HWND__*, WindissectOpaque *, unsigned char, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInputSystemComponents@WindowServer@Core@UI@Windows@@QEAAJPEAUHWND__@@@Z
    long InitializeInputSystemComponents(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@WindowServer@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@WindowServer@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAcceleratorKeyEventHandlers@WindowServer@Core@UI@Windows@@UEAAJPEAUIAcceleratorKeyEventArgs@234@@Z
    virtual long InvokeAcceleratorKeyEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCharacterReceivedEventHandlers@WindowServer@Core@UI@Windows@@UEAAJPEAUICharacterReceivedEventArgs@234@@Z
    virtual long InvokeCharacterReceivedEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeKeyDownEventHandlers@WindowServer@Core@UI@Windows@@UEAAJPEAUIKeyEventArgs@234@@Z
    virtual long InvokeKeyDownEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeKeyUpEventHandlers@WindowServer@Core@UI@Windows@@UEAAJPEAUIKeyEventArgs@234@@Z
    virtual long InvokeKeyUpEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeNavigationFocusEventHandlers@WindowServer@Core@UI@Windows@@UEAAJPEAUINavigationFocusEventArgs@234@@Z
    virtual long InvokeNavigationFocusEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSystemKeyDownEventHandlers@WindowServer@Core@UI@Windows@@UEAAJPEAUIKeyEventArgs@234@@Z
    virtual long InvokeSystemKeyDownEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSystemKeyUpEventHandlers@WindowServer@Core@UI@Windows@@UEAAJPEAUIKeyEventArgs@234@@Z
    virtual long InvokeSystemKeyUpEventHandlers(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInGameMode@WindowServer@Core@UI@Windows@@QEBA_NXZ
    bool IsInGameMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@WindowServer@Core@UI@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnFirstActivation@WindowServer@Core@UI@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long NotifyOnFirstActivation(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationStateChange@WindowServer@Core@UI@Windows@@UEAAJW4CoreWindowActivationMode@234@0I@Z
    virtual long OnActivationStateChange(int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnCharacterEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosestInteractiveBoundsMessage@WindowServer@Core@UI@Windows@@QEAAH_J@Z
    int OnClosestInteractiveBoundsMessage(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConsolidatedEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnConsolidatedEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuRequestedEvent@WindowServer@Core@UI@Windows@@UEAAH_J0@Z
    virtual int OnContextMenuRequestedEvent(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayChangedEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnDisplayChangedEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnableNonCUIDepartFocus@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long OnEnableNonCUIDepartFocus(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocusEvent@WindowServer@Core@UI@Windows@@QEAAHW4FOCUSDIRECTION@@@Z
    int OnGotFocusEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDelegated@WindowServer@Core@UI@Windows@@UEAAJIEPEA_K@Z
    virtual long OnInputDelegated(unsigned int, unsigned char, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDelegatedEx@WindowServer@Core@UI@Windows@@UEAAJIIEPEA_K@Z
    virtual long OnInputDelegatedEx(unsigned int, unsigned int, unsigned char, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputEnableEvent@WindowServer@Core@UI@Windows@@QEAAH_K@Z
    int OnInputEnableEvent(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDownEvent@WindowServer@Core@UI@Windows@@QEAAH_K_JH@Z
    int OnKeyDownEvent(uint64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUpEvent@WindowServer@Core@UI@Windows@@QEAAH_K_JH@Z
    int OnKeyUpEvent(uint64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutBoundsChange@WindowServer@Core@UI@Windows@@QEAAJXZ
    long OnLayoutBoundsChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMouseDeviceListenerChange@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnMouseDeviceListenerChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoveSizeEvent@WindowServer@Core@UI@Windows@@QEAAXW4MoveSizeState@1234@@Z
    void OnMoveSizeEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigateBackRequest@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnNavigateBackRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoPointerActivateChange@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long OnNoPointerActivateChange(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOcclusionChanged@WindowServer@Core@UI@Windows@@UEAAJW4CoreWindowOcclusion@234@@Z
    virtual long OnOcclusionChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLostEvent@WindowServer@Core@UI@Windows@@QEAAH_K@Z
    int OnPointerCaptureLostEvent(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerDownEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerDownEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEnterEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerEnterEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerLeaveEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerLeaveEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerRoutedAwayEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerRoutedAwayEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerRoutedReleasedEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerRoutedReleasedEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerRoutedToEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerRoutedToEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerUpEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerUpEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnPointerWheelEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPostResuming@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnPostResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreSuspending@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnPreSuspending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRawInputEvent@WindowServer@Core@UI@Windows@@QEAAH_J@Z
    int OnRawInputEvent(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResizeCompleted@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnResizeCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResizeStarted@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnResizeStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingChangedEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnSettingChangedEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextInputProducerFocusChanged@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long OnTextInputProducerFocusChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@WindowServer@Core@UI@Windows@@QEAAHXZ
    int OnThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTouchHitTestingEvent@WindowServer@Core@UI@Windows@@QEAAH_JPEA_J@Z
    int OnTouchHitTestingEvent(int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewStateChangedEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnViewStateChangedEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChangedEvent@WindowServer@Core@UI@Windows@@QEAAH_K_J@Z
    int OnVisibilityChangedEvent(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChange@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnVisibleBoundsChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChangeEvent@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long OnVisibleBoundsChangeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivateEvent@WindowServer@Core@UI@Windows@@QEAAH_K@Z
    int OnWindowActivateEvent(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivateEventInternal@WindowServer@Core@UI@Windows@@QEAAH_K@Z
    int OnWindowActivateEventInternal(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowCloseEvent@WindowServer@Core@UI@Windows@@QEAAHXZ
    int OnWindowCloseEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyEvent@WindowServer@Core@UI@Windows@@QEAAHXZ
    int OnWindowDestroyEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMoveEvent@WindowServer@Core@UI@Windows@@QEAAXXZ
    void OnWindowMoveEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowScaleChangedEvent@WindowServer@Core@UI@Windows@@QEAAHXZ
    int OnWindowScaleChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeEvent@WindowServer@Core@UI@Windows@@QEAAH_J@Z
    int OnWindowSizeEvent(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateCreateNavigationFocusEventArgs@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUINavigationFocusEventArgs@234@@Z
    virtual long PrivateCreateNavigationFocusEventArgs(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WindowServer@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterComponent@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long RegisterComponent(unsigned char);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WindowServer@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@WindowServer@Core@UI@Windows@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePointerCapture@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long ReleasePointerCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReloadCursorOnEnter@WindowServer@Core@UI@Windows@@QEAAXXZ
    void ReloadCursorOnEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@WindowServer@Core@UI@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestActivation@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long RequestActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowServer@Core@UI@Windows@@UEAAJW4CoreWindowType@234@EKPEBGKURect@Foundation@4@W4ZBID@@KK@Z
    virtual long RuntimeClassInitialize(int, unsigned char, unsigned long, unsigned short const *, unsigned long, WindissectOpaque, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendViewStateChangedEvent@WindowServer@Core@UI@Windows@@QEAAEIIII@Z
    unsigned char SendViewStateChangedEvent(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendWindowMoveEvent@WindowServer@Core@UI@Windows@@QEAAXXZ
    void SendWindowMoveEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendWindowSizeEvent@WindowServer@Core@UI@Windows@@QEAAE_J@Z
    unsigned char SendWindowSizeEvent(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionRoot@WindowServer@Core@UI@Windows@@UEAAJPEAUIVisual@Composition@34@@Z
    virtual long SetCompositionRoot(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionRoot_Internal@WindowServer@Core@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetCompositionRoot_Internal(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredBoundsMode@WindowServer@Core@UI@Windows@@UEAAJW4ApplicationViewBoundsMode@ViewManagement@34@PEAE@Z
    virtual long SetDesiredBoundsMode(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerCapture@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long SetPointerCapture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetWindowClientAdapter(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocusFromComponent@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long TakeFocusFromComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerWindowSizeEvent@WindowServer@Core@UI@Windows@@QEAAHXZ
    int TriggerWindowSizeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@WindowServer@Core@UI@Windows@@UEAAJXZ
    virtual long Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@WindowServer@Core@UI@Windows@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowServer@Core@UI@Windows@@QEAA@XZ
    WindowServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AcceleratorActivated@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUICoreAccelerators@Core@UI@Windows@@PEAVAcceleratorKeyEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_AcceleratorActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Activated@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVWindowActivatedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Activated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AutomationProviderRequested@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVAutomationProviderRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_AutomationProviderRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CharacterReceived@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVCharacterReceivedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_CharacterReceived(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closed@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVCoreWindowEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Closed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ClosestInteractiveBoundsRequested@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVClosestInteractiveBoundsRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ClosestInteractiveBoundsRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ComponentDisplayInformationChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVComponentDisplayInformationChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ComponentDisplayInformationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ComponentInputConfigured@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ComponentInputConfigured(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Consolidated@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVApplicationViewConsolidatedEventArgsInternal@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Consolidated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContextMenuRequested@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVContextMenuRequestedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ContextMenuRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Destroying@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVCoreWindowEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_Destroying(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DirectManipulationHitTest@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInternalDirectManipulationInterop@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_DirectManipulationHitTest(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DisplayChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVDisplayChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_DisplayChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FocusNavigating@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVNavigationFocusEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_FocusNavigating(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FocusReceived@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIComponentFocus@Core@UI@Windows@@PEAVFocusEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_FocusReceived(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InputDelegated@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVInputDelegatedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_InputDelegated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InputEnabled@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVInputEnabledEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_InputEnabled(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyDown@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVKeyEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyDown(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyUp@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVKeyEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyUp(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LayoutBoundsChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_LayoutBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MoveSizeLoopCompleted@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_MoveSizeLoopCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MoveSizeLoopStarted@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_MoveSizeLoopStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OcclusionChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVWindowOcclusionChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_OcclusionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerCaptureLost@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerCaptureLost(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerEntered@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerEntered(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerExited@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerExited(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerMoved@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerPressed@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerReleased@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerRoutedAway@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUICorePointerRedirector@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerRoutedAway(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerRoutedReleased@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUICorePointerRedirector@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerRoutedReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerRoutedTo@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUICorePointerRedirector@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerRoutedTo(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PointerWheelChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVPointerEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_PointerWheelChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResizeCompleted@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ResizeCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ResizeStarted@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ResizeStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RestoreFocus@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_RestoreFocus(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_RootActivate@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVWindowActivatedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_RootActivate(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SettingChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVSettingChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_SettingChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SizeChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVWindowSizeChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_SizeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SysKeyDown@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVKeyEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_SysKeyDown(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SysKeyUp@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVKeyEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_SysKeyUp(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ThemeChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVCoreWindowEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ThemeChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TouchHitTesting@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVTouchHitTestingEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_TouchHitTesting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ViewStateChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVViewStateChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ViewStateChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibilityChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAVVisibilityChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibilityChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VisibleBoundsChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_VisibleBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WindowPositionChanged@WindowServer@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindow@Core@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_WindowPositionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationMode@WindowServer@Core@UI@Windows@@UEAAJPEAW4CoreWindowActivationMode@234@@Z
    virtual long get_ActivationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjacentDisplayEdges@WindowServer@Core@UI@Windows@@UEAAJPEAK@Z
    virtual long get_AdjacentDisplayEdges(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppActivationClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_AppActivationClientAdapter(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_ApplicationViewClientAdapter(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewOrientation@WindowServer@Core@UI@Windows@@UEAAJPEAK@Z
    virtual long get_ApplicationViewOrientation(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewState@WindowServer@Core@UI@Windows@@UEAAJPEAK@Z
    virtual long get_ApplicationViewState(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutomationHostProvider@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_AutomationHostProvider(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@WindowServer@Core@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentDisplayInformation@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIComponentDisplayInformation@234@@Z
    virtual long get_ComponentDisplayInformation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentDisplayInformationPrivate@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIComponentDisplayInformation@234@@Z
    virtual long get_ComponentDisplayInformationPrivate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositionIsland@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIVisualTreeIsland@Composition@34@@Z
    virtual long get_CompositionIsland(::Windows::UI::Composition::IVisualTreeIsland * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompositionIslandEnvironment@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUICompositionIslandEnvironment@Composition@34@@Z
    virtual long get_CompositionIslandEnvironment(::Windows::UI::Composition::ICompositionIslandEnvironment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoordinateConversionId@WindowServer@Core@UI@Windows@@UEAAJPEAUCoordinateConversionId@234@@Z
    virtual long get_CoordinateConversionId(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreApplicationViewClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_CoreApplicationViewClientAdapter(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoreWindowResizeManager@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUICoreWindowResizeManager@234@@Z
    virtual long get_CoreWindowResizeManager(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CustomProperties@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@4@@Z
    virtual long get_CustomProperties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DescendentActivationMode@WindowServer@Core@UI@Windows@@UEAAJPEAW4CoreWindowActivationMode@234@@Z
    virtual long get_DescendentActivationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredBoundsMode@WindowServer@Core@UI@Windows@@UEAAJPEAW4ApplicationViewBoundsMode@ViewManagement@34@@Z
    virtual long get_DesiredBoundsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUICoreDispatcher@234@@Z
    virtual long get_Dispatcher(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIDispatcherQueue@System@4@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FlowDirection@WindowServer@Core@UI@Windows@@UEAAJPEAW4CoreWindowFlowDirection@234@@Z
    virtual long get_FlowDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameworkViewType@WindowServer@Core@UI@Windows@@UEAAJPEAW4FrameworkViewType@@@Z
    virtual long get_FrameworkViewType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoloViewClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_HoloViewClientAdapter(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImmersiveNavigationClient@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUINavigationClient@23Phone@4@@Z
    virtual long get_ImmersiveNavigationClient(::Windows::Phone::UI::Core::INavigationClient * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InputSite@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIInputSite@Input@Internal@34@@Z
    virtual long get_InputSite(::Windows::UI::Internal::Input::IInputSite * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDepartFocusPermitted@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsDepartFocusPermitted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInputEnabled@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInputEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsKeyboardInputEnabled@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsKeyboardInputEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOnLockScreen@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsOnLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsScreenCaptureEnabled@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsScreenCaptureEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUWP@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsUWP(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IslandTransformsMode@WindowServer@Core@UI@Windows@@UEAAJPEAW4IslandTransformsMode@2Internal@34@@Z
    virtual long get_IslandTransformsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardInputBuffer@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIKeyboardInputBuffer@23Phone@4@@Z
    virtual long get_KeyboardInputBuffer(::Windows::Phone::UI::Core::IKeyboardInputBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastInputEventTimestamp@WindowServer@Core@UI@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_LastInputEventTimestamp(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LayoutBounds@WindowServer@Core@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_LayoutBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MainWindow@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_MainWindow(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MayDuplicate@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_MayDuplicate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MouseDevice@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIMouseDevice@Input@Devices@4@@Z
    virtual long get_MouseDevice(::Windows::Devices::Input::IMouseDevice * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigationClient@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUINavigationClient@23Phone@4@@Z
    virtual long get_NavigationClient(::Windows::Phone::UI::Core::INavigationClient * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Occlusion@WindowServer@Core@UI@Windows@@UEAAJPEAW4CoreWindowOcclusion@234@@Z
    virtual long get_Occlusion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerCursor@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUICoreCursor@234@@Z
    virtual long get_PointerCursor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerPosition@WindowServer@Core@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_PointerPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerVisualizationSettings@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIPointerVisualizationSettings@Input@34@@Z
    virtual long get_PointerVisualizationSettings(::Windows::UI::Input::IPointerVisualizationSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionerClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_PositionerClientAdapter(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PrimaryDisplayRegion@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_PrimaryDisplayRegion(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuppressSystemOverlays@WindowServer@Core@UI@Windows@@UEAAJPEAW4FULL_SCREEN_TYPE@23Phone@4@@Z
    virtual long get_SuppressSystemOverlays(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemNavigationClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_SystemNavigationClientAdapter(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextInputProducer@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUITextInputProducer@234@@Z
    virtual long get_TextInputProducer(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThreadId@WindowServer@Core@UI@Windows@@UEAAJPEAK@Z
    virtual long get_ThreadId(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TitleBarClientAdapter@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long get_TitleBarClientAdapter(IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIContext@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIUIContext@34@@Z
    virtual long get_UIContext(::Windows::UI::IUIContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@WindowServer@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_Visible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleBounds@WindowServer@Core@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_VisibleBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowHandle@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_WindowHandle(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowId@WindowServer@Core@UI@Windows@@UEAAJPEAUWindowId@34@@Z
    virtual long get_WindowId(::Windows::UI::WindowId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInformation@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIWindowInformation@234@@Z
    virtual long get_WindowInformation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowLayout@WindowServer@Core@UI@Windows@@UEAAJPEAPEAUIWindowLayout@234@@Z
    virtual long get_WindowLayout(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FlowDirection@WindowServer@Core@UI@Windows@@UEAAJW4CoreWindowFlowDirection@234@@Z
    virtual long put_FlowDirection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FrameworkViewType@WindowServer@Core@UI@Windows@@UEAAJW4FrameworkViewType@@@Z
    virtual long put_FrameworkViewType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ImmersiveNavigationClient@WindowServer@Core@UI@Windows@@UEAAJPEAUINavigationClient@23Phone@4@@Z
    virtual long put_ImmersiveNavigationClient(::Windows::Phone::UI::Core::INavigationClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInputEnabled@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsInputEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsKeyboardInputEnabled@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsKeyboardInputEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsScreenCaptureEnabled@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsScreenCaptureEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IslandTransformsMode@WindowServer@Core@UI@Windows@@UEAAJW4IslandTransformsMode@2Internal@34@@Z
    virtual long put_IslandTransformsMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyboardInputBuffer@WindowServer@Core@UI@Windows@@UEAAJPEAUIKeyboardInputBuffer@23Phone@4@@Z
    virtual long put_KeyboardInputBuffer(::Windows::Phone::UI::Core::IKeyboardInputBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MainWindow@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long put_MainWindow(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MessageHandled@WindowServer@Core@UI@Windows@@UEAAJE@Z
    virtual long put_MessageHandled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NavigationClient@WindowServer@Core@UI@Windows@@UEAAJPEAUINavigationClient@23Phone@4@@Z
    virtual long put_NavigationClient(::Windows::Phone::UI::Core::INavigationClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PointerCursor@WindowServer@Core@UI@Windows@@UEAAJPEAUICoreCursor@234@@Z
    virtual long put_PointerCursor(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PointerPosition@WindowServer@Core@UI@Windows@@UEAAJUPoint@Foundation@4@@Z
    virtual long put_PointerPosition(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuppressSystemOverlays@WindowServer@Core@UI@Windows@@UEAAJW4FULL_SCREEN_TYPE@23Phone@4@@Z
    virtual long put_SuppressSystemOverlays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TextInputProducer@WindowServer@Core@UI@Windows@@UEAAJPEAUITextInputProducer@234@@Z
    virtual long put_TextInputProducer(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibilityDelay@WindowServer@Core@UI@Windows@@UEAAJI@Z
    virtual long put_VisibilityDelay(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AcceleratorActivated@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AcceleratorActivated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Activated@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Activated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AutomationProviderRequested@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AutomationProviderRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CharacterReceived@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CharacterReceived(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closed@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ClosestInteractiveBoundsRequested@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ClosestInteractiveBoundsRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ComponentDisplayInformationChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ComponentDisplayInformationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ComponentInputConfigured@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ComponentInputConfigured(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Consolidated@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Consolidated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContextMenuRequested@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContextMenuRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Destroying@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Destroying(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DirectManipulationHitTest@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DirectManipulationHitTest(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DisplayChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DisplayChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FocusNavigating@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FocusNavigating(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FocusReceived@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FocusReceived(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InputDelegated@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InputDelegated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InputEnabled@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InputEnabled(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyDown@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyDown(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyUp@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyUp(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LayoutBoundsChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LayoutBoundsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MoveSizeLoopCompleted@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MoveSizeLoopCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MoveSizeLoopStarted@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MoveSizeLoopStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OcclusionChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OcclusionChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerCaptureLost@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerCaptureLost(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerEntered@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerEntered(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerExited@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerExited(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerMoved@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerMoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerPressed@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerReleased@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerRoutedAway@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerRoutedAway(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerRoutedReleased@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerRoutedReleased(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerRoutedTo@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerRoutedTo(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PointerWheelChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_PointerWheelChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResizeCompleted@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResizeCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ResizeStarted@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ResizeStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RestoreFocus@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RestoreFocus(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_RootActivate@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_RootActivate(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SettingChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SettingChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SizeChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SizeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SysKeyDown@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SysKeyDown(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SysKeyUp@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SysKeyUp(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ThemeChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ThemeChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TouchHitTesting@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TouchHitTesting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ViewStateChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ViewStateChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibilityChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibilityChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VisibleBoundsChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VisibleBoundsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WindowPositionChanged@WindowServer@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WindowPositionChanged(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCoreWindowEntry@WindowServer@Core@UI@Windows@@AEAAXXZ
    void AddCoreWindowEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThreadAccess@WindowServer@Core@UI@Windows@@EEBAJXZ
    virtual long CheckThreadAccess() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWorkflow@WindowServer@Core@UI@Windows@@AEAAJXZ
    long DestroyWorkflow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableComponentUIBroker@WindowServer@Core@UI@Windows@@AEAAJXZ
    long EnableComponentUIBroker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationScales@WindowServer@Core@UI@Windows@@AEAAJPEAM0@Z
    long GetNavigationScales(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawInputEventHandler@WindowServer@Core@UI@Windows@@AEAA?AV?$ComPtr@UIRawInputEventHandler@@@WRL@Microsoft@@PEAUHWND__@@@Z
    WindissectOpaque GetRawInputEventHandler(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBoundsModeOverride@WindowServer@Core@UI@Windows@@AEAAXXZ
    void InitializeBoundsModeOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefaultTitleBarDragVisual@WindowServer@Core@UI@Windows@@AEAAJXZ
    long InitializeDefaultTitleBarDragVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeGlobalCoreAppDCompDevice@WindowServer@Core@UI@Windows@@AEAAJXZ
    long InitializeGlobalCoreAppDCompDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeOnCoreWindowCallback@WindowServer@Core@UI@Windows@@CAJPEAX@Z
    static long InvokeOnCoreWindowCallback(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUWAHostedCUIComponent@WindowServer@Core@UI@Windows@@AEAA?B_NXZ
    bool IsUWAHostedCUIComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_AdjustBounds@WindowServer@Core@UI@Windows@@AEAAJURect@Foundation@4@PEAU564@@Z
    long LegacyTransforms_AdjustBounds(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_CreateComponentDisplayInformationInternalStruct@WindowServer@Core@UI@Windows@@AEAAXPEAUComponentDisplayInformationInternal@234@@Z
    void LegacyTransforms_CreateComponentDisplayInformationInternalStruct(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_Ensure@WindowServer@Core@UI@Windows@@CAXXZ
    static void LegacyTransforms_Ensure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_GetWindowBounds@WindowServer@Core@UI@Windows@@AEAA_NPEAUtagRECT@@@Z
    bool LegacyTransforms_GetWindowBounds(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_InitializeComponentDisplayInformation@WindowServer@Core@UI@Windows@@AEAAJXZ
    long LegacyTransforms_InitializeComponentDisplayInformation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_IsComponentDisplayInformationDifferent@WindowServer@Core@UI@Windows@@AEAA_NUComponentDisplayInformationInternal@234@@Z
    bool LegacyTransforms_IsComponentDisplayInformationDifferent(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_ResetComponentDisplayInformationState@WindowServer@Core@UI@Windows@@AEAAJXZ
    long LegacyTransforms_ResetComponentDisplayInformationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_SendComponentDisplayInformationChangedEvent@WindowServer@Core@UI@Windows@@AEAAXXZ
    void LegacyTransforms_SendComponentDisplayInformationChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_UpdateComponentDisplayInformationDPIScaleFactor@WindowServer@Core@UI@Windows@@AEAAXXZ
    void LegacyTransforms_UpdateComponentDisplayInformationDPIScaleFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationReasonFromFocusDirection@WindowServer@Core@UI@Windows@@AEAA?AW4NavigationReason@234@W4FocusDirection@234@@Z
    int NavigationReasonFromFocusDirection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewStateChanged@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnApplicationViewStateChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLogicalSizeChanged@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnLogicalSizeChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPhysicalBoundsChanged@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnPhysicalBoundsChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScaleChanged@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnScaleChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnVisibilityChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibleBoundsChanged@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnVisibleBoundsChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientAdapterClosed@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnWindowClientAdapterClosed(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClientAdapterConsolidated@WindowServer@Core@UI@Windows@@AEAAJPEAUIInspectable@@0@Z
    long OnWindowClientAdapterConsolidated(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCoreWindowEntry@WindowServer@Core@UI@Windows@@AEAAXXZ
    void RemoveCoreWindowEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowClientInitialize@WindowServer@Core@UI@Windows@@AEAAJXZ
    long WindowClientInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@WindowServer@Core@UI@Windows@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCompositionHelper@WindowServer@Core@UI@Windows@@EEAAJXZ
    virtual long _EnsureCompositionHelper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowServer@Core@UI@Windows@@EEAA@XZ
    virtual ~WindowServer();
};
} // namespace Windows::UI::Core

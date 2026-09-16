#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 126 member(s).
namespace Windows::UI::Core {
class CCoreWindowSite {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCoreWindowSite@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCoreWindowSite@Core@UI@Windows@@QEAA@XZ
    CCoreWindowSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CCoreWindowSite@Core@UI@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureComponentRightsForHost@CCoreWindowSite@Core@UI@Windows@@UEAAJW4ComponentRightsFlags@234@0@Z
    virtual long ConfigureComponentRightsForHost(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@CCoreWindowSite@Core@UI@Windows@@UEAAJXZ
    virtual long Connect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNavigationFocusEventArgs@CCoreWindowSite@Core@UI@Windows@@UEAAJW4NavigationReason@234@URect@Foundation@4@PEAPEAUINavigationFocusEventArgs@234@@Z
    virtual long CreateNavigationFocusEventArgs(int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelegateInput@CCoreWindowSite@Core@UI@Windows@@UEAAJIE@Z
    virtual long DelegateInput(unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@CCoreWindowSite@Core@UI@Windows@@UEAAJXZ
    virtual long Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchViewEventCall@CCoreWindowSite@Core@UI@Windows@@UEAAJW4CuiViewEventType@234@@Z
    virtual long DispatchViewEventCall(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAlternateNavigationFocusHandlers@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUINavigateFocusArgs@234@@Z
    virtual long InvokeAlternateNavigationFocusHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackNavigation@CCoreWindowSite@Core@UI@Windows@@UEAAJXZ
    virtual long InvokeBackNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeComponentWindowActivatedEventHandlers@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long InvokeComponentWindowActivatedEventHandlers(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeNavigationFocusEventHandlers@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUINavigationFocusEventArgs@234@@Z
    virtual long InvokeNavigationFocusEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeViewEvent@CCoreWindowSite@Core@UI@Windows@@UEAAJIW4CuiViewEventType@234@@Z
    virtual long InvokeViewEvent(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocus@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUINavigationFocusEventArgs@234@@Z
    virtual long NavigateFocus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocusAsync@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUINavigationFocusEventArgs@234@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long NavigateFocusAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateFocusComplete@CCoreWindowSite@Core@UI@Windows@@UEAAJU_GUID@@E@Z
    virtual long NavigateFocusComplete(_GUID, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputAttempted@CCoreWindowSite@Core@UI@Windows@@UEAAXXZ
    virtual void OnInputAttempted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateCreateNavigationFocusEventArgs@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAPEAUINavigationFocusEventArgs@234@@Z
    virtual long PrivateCreateNavigationFocusEventArgs(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCoreWindowSite@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCoreWindowSite@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveComponent@CCoreWindowSite@Core@UI@Windows@@UEAAJI@Z
    virtual long RemoveComponent(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestBackNavigation@CCoreWindowSite@Core@UI@Windows@@UEAAJXZ
    virtual long RequestBackNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCoreWindowSite@Core@UI@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackNavigationHandler@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetBackNavigationHandler(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CCoreWindowSite@Core@UI@Windows@@UEAAJW4FocusDirection@234@@Z
    virtual long SetFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SiteInitialize@CCoreWindowSite@Core@UI@Windows@@QEAAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z
    long SiteInitialize(IInspectable *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartListeningToViewEvents@CCoreWindowSite@Core@UI@Windows@@UEAAJI@Z
    virtual long StartListeningToViewEvents(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_BackNavigated@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@_N@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_BackNavigated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ComponentWindowActivated@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindowSite@Core@UI@Windows@@PEAVComponentWindowActivatedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ComponentWindowActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FocusDeparting@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreWindowSite@Core@UI@Windows@@PEAVNavigationFocusEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_FocusDeparting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_InputAttempted@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_InputAttempted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ModalDialogEventHandler@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ModalDialogEventHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WindowClosedEventHandler@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_WindowClosedEventHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WindowReadyEventHandler@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_WindowReadyEventHandler(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentDisplayInformation@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAPEAUIComponentDisplayInformation@234@@Z
    virtual long get_ComponentDisplayInformation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentDisplayInformationForWeakRef@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_ComponentDisplayInformationForWeakRef(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentIslandTransformsMode@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAW4IslandTransformsMode@2Internal@34@@Z
    virtual long get_ComponentIslandTransformsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentPointerActivationPolicy@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAW4ComponentPointerActivationPolicy@234@@Z
    virtual long get_ComponentPointerActivationPolicy(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableComponentDisplayInformation@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_DisableComponentDisplayInformation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsComponentVisualConnected@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsComponentVisualConnected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInputEnabled@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInputEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsKeyboardInputEnabled@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsKeyboardInputEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModalDialogEnabled@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsModalDialogEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSuspendable@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsSuspendable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visible@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_Visible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bounds@CCoreWindowSite@Core@UI@Windows@@UEAAJURect@Foundation@4@@Z
    virtual long put_Bounds(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentDisplayInformation@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUIComponentDisplayInformation@234@@Z
    virtual long put_ComponentDisplayInformation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentDisplayInformationForWeakRef@CCoreWindowSite@Core@UI@Windows@@UEAAJPEAUIInspectable@@@Z
    virtual long put_ComponentDisplayInformationForWeakRef(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentPointerActivationPolicy@CCoreWindowSite@Core@UI@Windows@@UEAAJW4ComponentPointerActivationPolicy@234@@Z
    virtual long put_ComponentPointerActivationPolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisableComponentDisplayInformation@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long put_DisableComponentDisplayInformation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsComponentVisualConnected@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsComponentVisualConnected(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInputEnabled@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsInputEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsKeyboardInputEnabled@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsKeyboardInputEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsModalDialogEnabled@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsModalDialogEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSuspendable@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long put_IsSuspendable(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Position@CCoreWindowSite@Core@UI@Windows@@UEAAJUPoint@Foundation@4@@Z
    virtual long put_Position(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Visible@CCoreWindowSite@Core@UI@Windows@@UEAAJE@Z
    virtual long put_Visible(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_BackNavigated@CCoreWindowSite@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_BackNavigated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ComponentWindowActivated@CCoreWindowSite@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ComponentWindowActivated(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FocusDeparting@CCoreWindowSite@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FocusDeparting(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_InputAttempted@CCoreWindowSite@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_InputAttempted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ModalDialogEventHandler@CCoreWindowSite@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ModalDialogEventHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WindowClosedEventHandler@CCoreWindowSite@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WindowClosedEventHandler(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WindowReadyEventHandler@CCoreWindowSite@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WindowReadyEventHandler(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCoreWindowSite@Core@UI@Windows@@UEAA@XZ
    virtual ~CCoreWindowSite();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostMoveSizeCompleted@CCoreWindowSite@Core@UI@Windows@@IEAAJPEAUICoreWindow@234@PEAUIInspectable@@@Z
    long OnHostMoveSizeCompleted(WindissectOpaque *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostMoveSizeStarted@CCoreWindowSite@Core@UI@Windows@@IEAAJPEAUICoreWindow@234@PEAUIInspectable@@@Z
    long OnHostMoveSizeStarted(WindissectOpaque *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMoved@CCoreWindowSite@Core@UI@Windows@@IEAAJPEAUICoreWindow@234@PEAUIInspectable@@@Z
    long OnWindowMoved(WindissectOpaque *, IInspectable *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopSetComponentPointerActivationPolicy@CCoreWindowSite@Core@UI@Windows@@AEAAJW4ComponentPointerActivationPolicy@234@@Z
    long DesktopSetComponentPointerActivationPolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopSetFocus@CCoreWindowSite@Core@UI@Windows@@AEAAJPEAUIComponentSitePrivate@@W4FocusDirection@234@@Z
    long DesktopSetFocus(IComponentSitePrivate *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectInternal@CCoreWindowSite@Core@UI@Windows@@AEAAJI@Z
    long DisconnectInternal(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComponentIslandTransformsMode@CCoreWindowSite@Core@UI@Windows@@AEAAJPEAW4IslandTransformsMode@2Internal@34@@Z
    long GetComponentIslandTransformsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostClientToScreen@CCoreWindowSite@Core@UI@Windows@@AEAAJPEAURect@Foundation@4@@Z
    long HostClientToScreen(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMovedImpl@CCoreWindowSite@Core@UI@Windows@@AEAAJXZ
    long OnWindowMovedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAndDispatchViewEventCall@CCoreWindowSite@Core@UI@Windows@@CAJPEAXW4CuiViewEventType@234@@Z
    static long ResolveAndDispatchViewEventCall(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentViewInstanceId@CCoreWindowSite@Core@UI@Windows@@AEAAJPEAI@Z
    long get_ComponentViewInstanceId(unsigned int *);
};
} // namespace Windows::UI::Core

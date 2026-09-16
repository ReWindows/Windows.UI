#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 95 member(s).
namespace Windows::UI::Core {
class CDispatcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDispatcher@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDispatcher@Core@UI@Windows@@QEAA@XZ
    CDispatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAccess@CDispatcher@Core@UI@Windows@@QEAAHXZ
    int CheckAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CDispatcher@Core@UI@Windows@@UEAAJXZ
    virtual long Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDispatcher@Core@UI@Windows@@SAX_NPEAPEAV1234@@Z
    static void Create(bool, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherForThread@CDispatcher@Core@UI@Windows@@SAHPEAPEAV1234@@Z
    static int GetDispatcherForThread(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDispatcher@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDispatcher@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDispatcher@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAcceleratorCallback@CDispatcher@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long HasAcceleratorCallback(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CDispatcher@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CDispatcher@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAcceleratorKeyEventHandlers@CDispatcher@Core@UI@Windows@@QEAAJPEAUIAcceleratorKeyEventArgs@234@@Z
    long InvokeAcceleratorKeyEventHandlers(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvents@CDispatcher@Core@UI@Windows@@UEAAJW4CoreProcessEventsOption@234@@Z
    virtual long ProcessEvents(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PumpMessages@CDispatcher@Core@UI@Windows@@UEAAJXZ
    virtual long PumpMessages();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDispatcher@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAcceleratorCallback@CDispatcher@Core@UI@Windows@@UEAAJPEAUIAcceleratorCallback@@@Z
    virtual long RegisterAcceleratorCallback(IAcceleratorCallback *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDispatcher@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunAsync@CDispatcher@Core@UI@Windows@@UEAAJW4CoreDispatcherPriority@234@PEAUIDispatchedHandler@234@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long RunAsync(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunIdleAsync@CDispatcher@Core@UI@Windows@@UEAAJPEAUIIdleDispatchedHandler@234@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long RunIdleAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDispatcher@Core@UI@Windows@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPolicyForCoreWindow@CDispatcher@Core@UI@Windows@@QEAAXXZ
    void SetPolicyForCoreWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextInputProducerExists@CDispatcher@Core@UI@Windows@@UEAAJE@Z
    virtual long SetTextInputProducerExists(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldYield@CDispatcher@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long ShouldYield(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldYieldToPriority@CDispatcher@Core@UI@Windows@@UEAAJW4CoreDispatcherPriority@234@PEAE@Z
    virtual long ShouldYieldToPriority(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopProcessEvents@CDispatcher@Core@UI@Windows@@UEAAJXZ
    virtual long StopProcessEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateProcessEvents@CDispatcher@Core@UI@Windows@@UEAAJXZ
    virtual long TerminateProcessEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRunAsync@CDispatcher@Core@UI@Windows@@UEAAJW4CoreDispatcherPriority@234@PEAUIDispatchedHandler@234@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryRunAsync(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRunIdleAsync@CDispatcher@Core@UI@Windows@@UEAAJPEAUIIdleDispatchedHandler@234@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long TryRunIdleAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAcceleratorCallback@CDispatcher@Core@UI@Windows@@UEAAJPEAUIAcceleratorCallback@@@Z
    virtual long UnregisterAcceleratorCallback(IAcceleratorCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitAndProcessMessages@CDispatcher@Core@UI@Windows@@UEAAJPEAX@Z
    virtual long WaitAndProcessMessages(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AcceleratorKeyActivated@CDispatcher@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCoreDispatcher@Core@UI@Windows@@PEAVAcceleratorKeyEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_AcceleratorKeyActivated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPriority@CDispatcher@Core@UI@Windows@@UEAAJPEAW4CoreDispatcherPriority@234@@Z
    virtual long get_CurrentPriority(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@CDispatcher@Core@UI@Windows@@UEAAJPEAPEAUIDispatcherQueue@System@4@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasThreadAccess@CDispatcher@Core@UI@Windows@@UEAAJPEAE@Z
    virtual long get_HasThreadAccess(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CurrentPriority@CDispatcher@Core@UI@Windows@@UEAAJW4CoreDispatcherPriority@234@@Z
    virtual long put_CurrentPriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AcceleratorKeyActivated@CDispatcher@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AcceleratorKeyActivated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDispatcher@Core@UI@Windows@@UEAA@XZ
    virtual ~CDispatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDispatcherQueue@CDispatcher@Core@UI@Windows@@AEAAXXZ
    void CreateDispatcherQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchAcceleratorEvent@CDispatcher@Core@UI@Windows@@AEAAHPEAUtagMSG@@@Z
    int DispatchAcceleratorEvent(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainCoreMessaging@CDispatcher@Core@UI@Windows@@AEAAXXZ
    void DrainCoreMessaging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueAsyncWork@CDispatcher@Core@UI@Windows@@AEAAJP6AJIPEAPEAUICoreAsyncInfo@234@@ZW4CoreDispatcherPriority@234@PEAUIDispatchedHandler@234@PEAUIIdleDispatchedHandler@234@0@Z
    long EnqueueAsyncWork(long ( *)(unsigned int, WindissectOpaque * *), int, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextAsyncInfoId@CDispatcher@Core@UI@Windows@@AEAAIXZ
    unsigned int GetNextAsyncInfoId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadExit@CDispatcher@Core@UI@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void OnThreadExit(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostWMQuit@CDispatcher@Core@UI@Windows@@AEAAXXZ
    void PostWMQuit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInvokeItem@CDispatcher@Core@UI@Windows@@AEAAJPEA_N@Z
    long ProcessInvokeItem(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@CDispatcher@Core@UI@Windows@@AEAA_N_NPEA_N1@Z
    bool ProcessMessage(bool, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadExitCallback@CDispatcher@Core@UI@Windows@@AEAAXXZ
    void RegisterThreadExitCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInvokeItem@CDispatcher@Core@UI@Windows@@AEAAXPEAU_InvokeEntry@234@@Z
    void RemoveInvokeItem(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateProcessEventsInternal@CDispatcher@Core@UI@Windows@@AEAAJ_N@Z
    long TerminateProcessEventsInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitAndProcessMessagesInternal@CDispatcher@Core@UI@Windows@@AEAA_N_NPEAX@Z
    bool WaitAndProcessMessagesInternal(bool, void *);
};
} // namespace Windows::UI::Core

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 23 member(s).
class CAutomationProviderRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAutomationProviderRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAutomationProviderRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAutomationProviderRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAutomationProviderRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAutomationProviderRequestedEventArgs@@UEAAJXZ
    virtual long Initialize();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAutomationProviderRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAutomationProviderRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutomationProvider@CAutomationProviderRequestedEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_AutomationProvider(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CAutomationProviderRequestedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutomationProvider@CAutomationProviderRequestedEventArgs@@UEAAJPEAUIInspectable@@@Z
    virtual long put_AutomationProvider(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CAutomationProviderRequestedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutomationProviderRequestedEventArgs@@UEAA@XZ
    virtual ~CAutomationProviderRequestedEventArgs();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
class CInputDelegatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputDelegatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInputDelegatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInputDelegatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInputDelegatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputDelegatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputDelegatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInputDelegatedEventArgs@@UEAAJIIE@Z
    virtual long RuntimeClassInitialize(unsigned int, unsigned int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelegateWindowHandle@CInputDelegatedEventArgs@@UEAAJPEA_K@Z
    virtual long get_DelegateWindowHandle(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delegated@CInputDelegatedEventArgs@@UEAAJPEAE@Z
    virtual long get_Delegated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CInputDelegatedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceProcess@CInputDelegatedEventArgs@@UEAAJPEAI@Z
    virtual long get_SourceProcess(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceView@CInputDelegatedEventArgs@@UEAAJPEAI@Z
    virtual long get_SourceView(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DelegateWindowHandle@CInputDelegatedEventArgs@@UEAAJ_K@Z
    virtual long put_DelegateWindowHandle(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CInputDelegatedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

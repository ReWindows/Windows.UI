#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
class CViewStateChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CViewStateChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CViewStateChangedEventArgs@@QEAA@XZ
    CViewStateChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CViewStateChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CViewStateChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CViewStateChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CViewStateChangedEventArgs@@UEAAJIIII@Z
    virtual long Initialize(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CViewStateChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CViewStateChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjustDisplayEdges@CViewStateChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_AdjustDisplayEdges(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@CViewStateChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_Flags(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CViewStateChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@CViewStateChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_Orientation(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@CViewStateChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_State(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CViewStateChangedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

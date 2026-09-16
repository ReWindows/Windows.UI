#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 13 member(s).
class CApplicationViewConsolidatedEventArgsInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CApplicationViewConsolidatedEventArgsInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationViewConsolidatedEventArgsInternal@@QEAA@I@Z
    CApplicationViewConsolidatedEventArgsInternal(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CApplicationViewConsolidatedEventArgsInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CApplicationViewConsolidatedEventArgsInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CApplicationViewConsolidatedEventArgsInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CApplicationViewConsolidatedEventArgsInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CApplicationViewConsolidatedEventArgsInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConsolidatedFlags@CApplicationViewConsolidatedEventArgsInternal@@UEAAJPEAI@Z
    virtual long get_ConsolidatedFlags(unsigned int *);
};

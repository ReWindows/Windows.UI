#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 21 member(s).
class CInternalUICoreStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInternalUICoreStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInternalUICoreStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInternalUICoreStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInternalUICoreStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CInternalUICoreStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CInternalUICoreStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInternalUICoreStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInternalUICoreStatics@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CInternalUICoreStatics@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputSinkFromInspectable@CInternalUICoreStatics@@CAJPEAUIInspectable@@HPEAPEAXPEAUCOMPOSITION_INPUT_QUEUE@@@Z
    static long InputSinkFromInspectable(IInspectable *, int, void * *, COMPOSITION_INPUT_QUEUE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDragVisual@CInternalUICoreStatics@@EEAAJPEAUIInspectable@@@Z
    virtual long RegisterDragVisual(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDropTarget@CInternalUICoreStatics@@EEAAJPEAUIInspectable@@PEA_K@Z
    virtual long RegisterDropTarget(IInspectable *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDropTarget@CInternalUICoreStatics@@EEAAJPEAUIInspectable@@@Z
    virtual long UnregisterDropTarget(IInspectable *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 22 member(s).
class CDisplayChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDisplayChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDisplayChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDisplayChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDisplayChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDisplayChangedEventArgs@@UEAAJIUSize@Foundation@Windows@@@Z
    virtual long Initialize(unsigned int, WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDisplayChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDisplayChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitsPerPixel@CDisplayChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_BitsPerPixel(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CDisplayChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CDisplayChangedEventArgs@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_Size(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CDisplayChangedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

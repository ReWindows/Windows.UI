#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 16 member(s).
class CClosestInteractiveBoundsRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CClosestInteractiveBoundsRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJUPoint@Foundation@Windows@@URect@34@1@Z
    virtual long Initialize(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CClosestInteractiveBoundsRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClosestInteractiveBounds@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ClosestInteractiveBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerPosition@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PointerPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchBounds@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_SearchBounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ClosestInteractiveBounds@CClosestInteractiveBoundsRequestedEventArgs@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_ClosestInteractiveBounds(WindissectOpaque);
};

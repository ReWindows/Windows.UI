#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
class CContextMenuRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContextMenuRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CContextMenuRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CContextMenuRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CContextMenuRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContextMenuRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContextMenuRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CContextMenuRequestedEventArgs@@UEAAJPEAUHWND__@@_J1@Z
    virtual long RuntimeClassInitialize(HWND__*, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CContextMenuRequestedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFromTouch@CContextMenuRequestedEventArgs@@UEAAJPEAE@Z
    virtual long get_IsFromTouch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelPosition@CContextMenuRequestedEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_PixelPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CContextMenuRequestedEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CContextMenuRequestedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

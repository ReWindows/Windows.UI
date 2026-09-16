#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 24 member(s).
class PopupMenu {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PopupMenu@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PopupMenu@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PopupMenu@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PopupMenu@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PopupMenu@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PopupMenu@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PopupMenu@@QEAA@XZ
    PopupMenu();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PopupMenu@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PopupMenu@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PopupMenu@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@PopupMenu@@UEAAJUPoint@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@34@@Z
    virtual long ShowAsync(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsyncWithRect@PopupMenu@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@34@@Z
    virtual long ShowAsyncWithRect(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsyncWithRectAndPlacement@PopupMenu@@UEAAJURect@Foundation@Windows@@W4Placement@Popups@UI@4@PEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@34@@Z
    virtual long ShowAsyncWithRectAndPlacement(WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@PopupMenu@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Commands(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsyncHelper@PopupMenu@@AEAAJPEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@Windows@@@Z
    long ShowAsyncHelper(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopupMenu@@EEAA@XZ
    virtual ~PopupMenu();
};

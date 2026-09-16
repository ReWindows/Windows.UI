#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
namespace Windows::UI::Input {
class CHoldingEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHoldingEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHoldingEventArgs@Input@UI@Windows@@UEAAJW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@W4HoldingState@234@II@Z
    virtual long Initialize(int, WindissectOpaque, int, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHoldingEventArgs@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHoldingEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactCount@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_ContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentContactCount@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_CurrentContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HoldingState@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAW4HoldingState@234@@Z
    virtual long get_HoldingState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAW4PointerDeviceType@2Devices@4@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CHoldingEventArgs@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Position(WindissectOpaque *);
};
} // namespace Windows::UI::Input

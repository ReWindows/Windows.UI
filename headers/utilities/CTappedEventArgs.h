#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
namespace Windows::UI::Input {
class CTappedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTappedEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTappedEventArgs@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTappedEventArgs@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTappedEventArgs@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTappedEventArgs@Input@UI@Windows@@UEAAJW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@II@Z
    virtual long Initialize(int, WindissectOpaque, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTappedEventArgs@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTappedEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactCount@CTappedEventArgs@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_ContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@CTappedEventArgs@Input@UI@Windows@@UEAAJPEAW4PointerDeviceType@2Devices@4@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CTappedEventArgs@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TapCount@CTappedEventArgs@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_TapCount(unsigned int *);
};
} // namespace Windows::UI::Input

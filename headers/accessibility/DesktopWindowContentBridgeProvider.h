#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 7 member(s).
namespace Windows::UI::Core {
class DesktopWindowContentBridgeProvider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesktopWindowContentBridgeProvider@Core@UI@Windows@@QEAA@PEAUHWND__@@@Z
    DesktopWindowContentBridgeProvider(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternProvider@DesktopWindowContentBridgeProvider@Core@UI@Windows@@UEAAJHPEAPEAUIUnknown@@@Z
    virtual long GetPatternProvider(int, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValue@DesktopWindowContentBridgeProvider@Core@UI@Windows@@UEAAJHPEAUtagVARIANT@@@Z
    virtual long GetPropertyValue(int, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostRawElementProvider@DesktopWindowContentBridgeProvider@Core@UI@Windows@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z
    virtual long get_HostRawElementProvider(IRawElementProviderSimple * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderOptions@DesktopWindowContentBridgeProvider@Core@UI@Windows@@UEAAJPEAW4ProviderOptions@@@Z
    virtual long get_ProviderOptions(int *);
};
} // namespace Windows::UI::Core

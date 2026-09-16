#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 24 member(s).
namespace Windows::UI::Core {
class CKeyboardDeliveryInterceptorKeyEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@EEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyStatus@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@EEAAJPEAUCorePhysicalKeyStatus@234@@Z
    virtual long get_KeyStatus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VirtualKey@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@EEAAJPEAW4VirtualKey@System@4@@Z
    virtual long get_VirtualKey(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CKeyboardDeliveryInterceptorKeyEventArgs@Core@UI@Windows@@EEAAJE@Z
    virtual long put_Handled(unsigned char);
};
} // namespace Windows::UI::Core

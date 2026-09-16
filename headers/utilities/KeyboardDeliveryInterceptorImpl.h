#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 28 member(s).
namespace Windows::UI::Input {
class KeyboardDeliveryInterceptorImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@QEAA@XZ
    KeyboardDeliveryInterceptorImpl();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@UEAA@XZ
    virtual ~KeyboardDeliveryInterceptorImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRawKeyboardInput@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@EEAAJAEBUCorePhysicalKeyStatus@Core@34@W4VirtualKey@System@4@@Z
    virtual long OnRawKeyboardInput(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyDown@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@EEAAJPEAU?$ITypedEventHandler@PEAVKeyboardDeliveryInterceptor@Input@UI@Windows@@PEAVKeyEventArgs@Core@34@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyDown(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_KeyUp@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@EEAAJPEAU?$ITypedEventHandler@PEAVKeyboardDeliveryInterceptor@Input@UI@Windows@@PEAVKeyEventArgs@Core@34@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_KeyUp(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInterceptionEnabledWhenInForeground@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@EEAAJPEAE@Z
    virtual long get_IsInterceptionEnabledWhenInForeground(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInterceptionEnabledWhenInForeground@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@EEAAJE@Z
    virtual long put_IsInterceptionEnabledWhenInForeground(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyDown@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@EEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyDown(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_KeyUp@KeyboardDeliveryInterceptorImpl@Input@UI@Windows@@EEAAJUEventRegistrationToken@@@Z
    virtual long remove_KeyUp(EventRegistrationToken);
};
} // namespace Windows::UI::Input

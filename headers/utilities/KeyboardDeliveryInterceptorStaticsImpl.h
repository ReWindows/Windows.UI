#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace Windows::UI::Input {
class KeyboardDeliveryInterceptorStaticsImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeyboardDeliveryInterceptorStaticsImpl@Input@UI@Windows@@QEAA@XZ
    KeyboardDeliveryInterceptorStaticsImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@KeyboardDeliveryInterceptorStaticsImpl@Input@UI@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@KeyboardDeliveryInterceptorStaticsImpl@Input@UI@Windows@@EEAAJPEAPEAUIKeyboardDeliveryInterceptor@234@@Z
    virtual long GetForCurrentView(::Windows::UI::Input::IKeyboardDeliveryInterceptor * *);
};
} // namespace Windows::UI::Input

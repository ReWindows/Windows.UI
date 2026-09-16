#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace Windows::UI::Core {
class CCoreWindowResizeManagerStatics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCoreWindowResizeManagerStatics@Core@UI@Windows@@QEAA@XZ
    CCoreWindowResizeManagerStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCoreWindowResizeManagerStatics@Core@UI@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CCoreWindowResizeManagerStatics@Core@UI@Windows@@EEAAJPEAPEAUICoreWindowResizeManager@234@@Z
    virtual long GetForCurrentView(WindissectOpaque * *);
};
} // namespace Windows::UI::Core

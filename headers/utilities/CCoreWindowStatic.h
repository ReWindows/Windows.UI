#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 4 member(s).
namespace Windows::UI::Core {
class CCoreWindowStatic {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCoreWindowStatic@Core@UI@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@CCoreWindowStatic@Core@UI@Windows@@EEAAJPEAPEAUICoreWindow@234@@Z
    virtual long GetForCurrentThread(WindissectOpaque * *);
};
} // namespace Windows::UI::Core

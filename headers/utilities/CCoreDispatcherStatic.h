#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 6 member(s).
namespace Windows::UI::Core {
class CCoreDispatcherStatic {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCoreDispatcherStatic@Core@UI@Windows@@QEAA@XZ
    CCoreDispatcherStatic();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCoreDispatcherStatic@Core@UI@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@CCoreDispatcherStatic@Core@UI@Windows@@EEAAJPEAPEAUICoreDispatcher@234@@Z
    virtual long GetForCurrentThread(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateForCurrentThread@CCoreDispatcherStatic@Core@UI@Windows@@EEAAJPEAPEAUICoreDispatcher@234@@Z
    virtual long GetOrCreateForCurrentThread(WindissectOpaque * *);
};
} // namespace Windows::UI::Core

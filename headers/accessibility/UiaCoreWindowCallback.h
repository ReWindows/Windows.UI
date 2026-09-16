#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
class UiaCoreWindowCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationConnection@UiaCoreWindowCallback@@UEAAJI@Z
    virtual long OnCreateAutomationConnection(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UiaCoreWindowCallback@@QEAA@PEAVWindowServer@Core@UI@Windows@@@Z
    UiaCoreWindowCallback(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UiaCoreWindowCallback@@UEAA@XZ
    virtual ~UiaCoreWindowCallback();
};

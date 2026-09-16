#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
class CIslandTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenPointToVisual@CIslandTransform@@QEBA?AUPoint@Foundation@Windows@@U234@@Z
    WindissectOpaque ScreenPointToVisual(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenPointsToVisual@CIslandTransform@@QEBAXKPEAUPoint@Foundation@Windows@@0@Z
    void ScreenPointsToVisual(unsigned long, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenRectToVisual@CIslandTransform@@QEAA?AURect@Foundation@Windows@@UtagRECT@@@Z
    WindissectOpaque ScreenRectToVisual(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualPointToScreen@CIslandTransform@@QEBA?AUPoint@Foundation@Windows@@U234@@Z
    WindissectOpaque VisualPointToScreen(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualRectToScreen@CIslandTransform@@QEAA?AURect@Foundation@Windows@@U234@@Z
    WindissectOpaque VisualRectToScreen(WindissectOpaque);
};

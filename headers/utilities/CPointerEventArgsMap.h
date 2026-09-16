#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 3 member(s).
class CPointerEventArgsMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CPointerEventArgsMap@@QEAAJPEAVCPointerEventArgs@@@Z
    long Insert(CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CPointerEventArgsMap@@QEAAPEAVCPointerEventArgs@@I@Z
    CPointerEventArgs * Lookup(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CPointerEventArgsMap@@QEAAJI@Z
    long Remove(unsigned int);
};

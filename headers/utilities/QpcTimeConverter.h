#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 4 member(s).
class QpcTimeConverter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ
    uint64_t GetCurrentMicroSecTime() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MicroSecToQpc@QpcTimeConverter@@QEBAH_KPEA_K@Z
    int MicroSecToQpc(uint64_t, uint64_t *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QpcTimeConverter@@QEAA@XZ
    QpcTimeConverter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z
    int QpcToMicroSec(uint64_t, uint64_t *) const;
};

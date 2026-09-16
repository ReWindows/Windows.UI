#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace Windows::Internal::ApplicationModel {
class WindowManagement {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComponentUICShellPolicyEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsComponentUICShellPolicyEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnHoloEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsIDKOnHoloEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIDKOnSKUEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NPEBG@Z
    bool IsIDKOnSKUEnabled(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMinShellPresent@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsMinShellPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowClientBamoEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ
    bool IsWindowClientBamoEnabled();
};
} // namespace Windows::Internal::ApplicationModel

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 1 member(s).
namespace Windows::Devices::Internal::Input {
class PointerDeviceStaticsHelper {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDevice@PointerDeviceStaticsHelper@Input@Internal@Devices@Windows@@YAJPEBUtagPOINTER_INFO@@PEAPEAUIPointerDevice@245@@Z
    long GetPointerDevice(tagPOINTER_INFO const *, ::Windows::Devices::Input::IPointerDevice * *);
};
} // namespace Windows::Devices::Internal::Input

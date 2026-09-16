#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 20 member(s).
namespace Windows::UI::ViewManagement {
class ApplicationViewScalingFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationViewScalingFactory@ViewManagement@UI@Windows@@QEAA@XZ
    ApplicationViewScalingFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetDisableLayoutScaling@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAJEPEAE@Z
    virtual long TrySetDisableLayoutScaling(unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableLayoutScaling@ApplicationViewScalingFactory@ViewManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_DisableLayoutScaling(unsigned char *);
};
} // namespace Windows::UI::ViewManagement

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 28 member(s).
namespace Windows::UI::Input {
class CManipulationUpdatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@UManipulationDelta@234@2UManipulationVelocities@234@II@Z
    virtual long Initialize(int, WindissectOpaque, ::Windows::UI::Input::ManipulationDelta, ::Windows::UI::Input::ManipulationDelta, ::Windows::UI::Input::ManipulationVelocities, unsigned int, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactCount@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_ContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cumulative@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAUManipulationDelta@234@@Z
    virtual long get_Cumulative(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentContactCount@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_CurrentContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delta@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAUManipulationDelta@234@@Z
    virtual long get_Delta(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAW4PointerDeviceType@2Devices@4@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Velocities@CManipulationUpdatedEventArgs@Input@UI@Windows@@UEAAJPEAUManipulationVelocities@234@@Z
    virtual long get_Velocities(::Windows::UI::Input::ManipulationVelocities *);
};
} // namespace Windows::UI::Input

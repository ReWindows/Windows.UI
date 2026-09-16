#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
namespace Windows::UI::Input {
class CManipulationStartedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJW4PointerDeviceType@2Devices@4@UPoint@Foundation@4@UManipulationDelta@234@I@Z
    virtual long Initialize(int, WindissectOpaque, ::Windows::UI::Input::ManipulationDelta, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactCount@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_ContactCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cumulative@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJPEAUManipulationDelta@234@@Z
    virtual long get_Cumulative(::Windows::UI::Input::ManipulationDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJPEAW4PointerDeviceType@2Devices@4@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CManipulationStartedEventArgs@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Position(WindissectOpaque *);
};
} // namespace Windows::UI::Input

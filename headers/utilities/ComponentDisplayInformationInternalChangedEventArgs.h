#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 13 member(s).
namespace Windows::UI::Core {
class ComponentDisplayInformationInternalChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAJUComponentDisplayInformationInternal@234@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentDisplayInformation@ComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@UEAAJPEAUComponentDisplayInformationInternal@234@@Z
    virtual long get_ComponentDisplayInformation(WindissectOpaque *);
};
} // namespace Windows::UI::Core

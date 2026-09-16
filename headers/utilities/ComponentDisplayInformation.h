#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 32 member(s).
namespace Windows::UI::Core {
class ComponentDisplayInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentDisplayInformation@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentDisplayInformation@Core@UI@Windows@@QEAA@XZ
    ComponentDisplayInformation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ComponentDisplayInformation@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ComponentDisplayInformation@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentDisplayInformation@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentDisplayInformation@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentDisplayInformation@ComponentDisplayInformation@Core@UI@Windows@@UEAAJUComponentDisplayInformationInternal@234@@Z
    virtual long SetComponentDisplayInformation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ComponentDisplayInformationInternalChanged@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVComponentDisplayInformationInternalChangedEventArgs@Core@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ComponentDisplayInformationInternalChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AggregateScaleFactor@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@4@@Z
    virtual long get_AggregateScaleFactor(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AggregateTransform@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAUMatrix4x4@Numerics@Foundation@4@@Z
    virtual long get_AggregateTransform(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bounds@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_Bounds(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DpiScaleFactor@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@4@@Z
    virtual long get_DpiScaleFactor(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationAngle@ComponentDisplayInformation@Core@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ComponentDisplayInformationInternalChanged@ComponentDisplayInformation@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ComponentDisplayInformationInternalChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentDisplayInformation@Core@UI@Windows@@UEAA@XZ
    virtual ~ComponentDisplayInformation();
};
} // namespace Windows::UI::Core

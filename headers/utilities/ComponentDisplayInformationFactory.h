#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 20 member(s).
namespace Windows::UI::Core {
class ComponentDisplayInformationFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentDisplayInformationFactory@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentDisplayInformationFactory@Core@UI@Windows@@QEAA@XZ
    ComponentDisplayInformationFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ComponentDisplayInformationFactory@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ComponentDisplayInformationFactory@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ComponentDisplayInformationFactory@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComponentDisplayInformationFactory@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentDisplayInformationFactory@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ComponentDisplayInformationFactory@Core@UI@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateComponentDisplayInformation@ComponentDisplayInformationFactory@Core@UI@Windows@@EEAAJUMatrix4x4@Numerics@Foundation@4@UVector2@674@1MURect@74@PEAPEAUIComponentDisplayInformation@234@@Z
    virtual long CreateComponentDisplayInformation(WindissectOpaque, WindissectOpaque, WindissectOpaque, float, WindissectOpaque, WindissectOpaque * *);
};
} // namespace Windows::UI::Core

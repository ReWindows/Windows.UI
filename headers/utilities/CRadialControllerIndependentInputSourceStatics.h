#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 31 member(s).
class CRadialControllerIndependentInputSourceStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CRadialControllerIndependentInputSourceStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialControllerIndependentInputSourceStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForView@CRadialControllerIndependentInputSourceStatics@@UEAAJPEAUICoreApplicationView@Core@ApplicationModel@Windows@@PEAPEAUIRadialControllerIndependentInputSource@3Input@UI@5@@Z
    virtual long CreateForView(::Windows::ApplicationModel::Core::ICoreApplicationView *, ::Windows::UI::Input::Core::IRadialControllerIndependentInputSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForWindow@CRadialControllerIndependentInputSourceStatics@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateForWindow(HWND__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialControllerIndependentInputSourceStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialControllerIndependentInputSourceStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialControllerIndependentInputSourceStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CRadialControllerIndependentInputSourceStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CRadialControllerIndependentInputSourceStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialControllerIndependentInputSourceStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialControllerIndependentInputSourceStatics@@UEAAKXZ
    virtual unsigned long Release();
};

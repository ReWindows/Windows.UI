#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 35 member(s).
class CInteractiveObjectDevice {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectDevice@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectDevice@@QEAA@XZ
    CInteractiveObjectDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonCapabilities@CInteractiveObjectDevice@@UEAAJPEAPEAUIInteractiveObjectButtonCapabilities@Input@Internal@UI@Windows@@@Z
    virtual long GetButtonCapabilities(::Windows::UI::Internal::Input::IInteractiveObjectButtonCapabilities * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDialCapabilities@CInteractiveObjectDevice@@UEAAJPEAPEAUIInteractiveObjectDialCapabilities@Input@Internal@UI@Windows@@@Z
    virtual long GetDialCapabilities(::Windows::UI::Internal::Input::IInteractiveObjectDialCapabilities * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectDevice@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerCapabilities@CInteractiveObjectDevice@@UEAAJPEAPEAUIInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@@Z
    virtual long GetPointerCapabilities(::Windows::UI::Internal::Input::IInteractiveObjectPointerCapabilities * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectDevice@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSliderCapabilities@CInteractiveObjectDevice@@UEAAJPEAPEAUIInteractiveObjectSliderCapabilities@Input@Internal@UI@Windows@@@Z
    virtual long GetSliderCapabilities(::Windows::UI::Internal::Input::IInteractiveObjectSliderCapabilities * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectDevice@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWheelCapabilities@CInteractiveObjectDevice@@UEAAJPEAPEAUIInteractiveObjectWheelCapabilities@Input@Internal@UI@Windows@@@Z
    virtual long GetWheelCapabilities(::Windows::UI::Internal::Input::IInteractiveObjectWheelCapabilities * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInFocus@CInteractiveObjectDevice@@QEAAEXZ
    unsigned char IsInFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@CInteractiveObjectDevice@@UEAAJPEAUHWND__@@I_K_J@Z
    virtual long ProcessMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectDevice@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectDevice@@UEAAJI@Z
    virtual long RuntimeClassInitialize(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractiveObjectFocus@CInteractiveObjectDevice@@UEAAJ_KW4InteractiveObjectPromotionType@Input@Internal@UI@Windows@@@Z
    virtual long SetInteractiveObjectFocus(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CaptureAcquired@CInteractiveObjectDevice@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectDevice@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CaptureAcquired(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CaptureLost@CInteractiveObjectDevice@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectDevice@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CaptureLost(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Disengaged@CInteractiveObjectDevice@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectDevice@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Disengaged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Engaged@CInteractiveObjectDevice@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectDevice@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Engaged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CInteractiveObjectDevice@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CaptureAcquired@CInteractiveObjectDevice@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CaptureAcquired(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CaptureLost@CInteractiveObjectDevice@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CaptureLost(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Disengaged@CInteractiveObjectDevice@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Disengaged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Engaged@CInteractiveObjectDevice@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Engaged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectDevice@@UEAA@XZ
    virtual ~CInteractiveObjectDevice();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteractiveObjectInfo@CInteractiveObjectDevice@@EEAAJKPEAUtagINTERACTIVECTRL_INFO@@W4InteractiveObjectUpdateKind@Input@Internal@UI@Windows@@AEAV?$ComPtr@VCInteractiveObjectInfo@@@WRL@Microsoft@@@Z
    virtual long CreateInteractiveObjectInfo(unsigned long, tagINTERACTIVECTRL_INFO *, int, WindissectOpaque &);
};

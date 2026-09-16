#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 31 member(s).
class CInteractiveObjectProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectProperties@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectProperties@@QEAA@XZ
    CInteractiveObjectProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectProperties@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectProperties@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectProperties@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsageValue@CInteractiveObjectProperties@@UEAAJIIPEAH@Z
    virtual long GetUsageValue(unsigned int, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUsage@CInteractiveObjectProperties@@UEAAJIIPEAE@Z
    virtual long HasUsage(unsigned int, unsigned int, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectProperties@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectProperties@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectProperties@@UEAAJKPEAVCInteractiveObjectDevice@@AEAUtagSIMPLEHAPTICSCTRL_DEVICE_INFO@@URect@Foundation@Windows@@PEAV?$Vector@PEAVInteractiveObjectButtonInfo@Input@Internal@UI@Windows@@U?$DefaultEqualityPredicate@PEAVInteractiveObjectButtonInfo@Input@Internal@UI@Windows@@@3Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVInteractiveObjectButtonInfo@Input@Internal@UI@Windows@@@3785@U?$DefaultVectorOptions@PEAVInteractiveObjectButtonInfo@Input@Internal@UI@Windows@@@3785@@Internal@Collections@56@E_KW4InteractiveObjectUpdateKind@Input@8UI@6@@Z
    virtual long RuntimeClassInitialize(unsigned long, CInteractiveObjectDevice *, tagSIMPLEHAPTICSCTRL_DEVICE_INFO &, WindissectOpaque, WindissectOpaque *, unsigned char, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonsState@CInteractiveObjectProperties@@UEAAJPEAPEAU?$IVector@PEAVInteractiveObjectButtonInfo@Input@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ButtonsState(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactRect@CInteractiveObjectProperties@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_ContactRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractiveObjectUpdateKind@CInteractiveObjectProperties@@UEAAJPEAW4InteractiveObjectUpdateKind@Input@Internal@UI@Windows@@@Z
    virtual long get_InteractiveObjectUpdateKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCanceled@CInteractiveObjectProperties@@UEAAJPEAE@Z
    virtual long get_IsCanceled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SimpleHapticsController@CInteractiveObjectProperties@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_SimpleHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SlidersState@CInteractiveObjectProperties@@UEAAJPEAPEAU?$IVector@PEAVInteractiveObjectDeltaInfo@Input@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SlidersState(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectProperties@@UEAA@XZ
    virtual ~CInteractiveObjectProperties();
};

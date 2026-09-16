#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 21 member(s).
class CInteractiveObjectSliderCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectSliderCapabilities@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectSliderCapabilities@@QEAA@XZ
    CInteractiveObjectSliderCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectSliderCapabilities@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectSliderCapabilities@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectSliderCapabilities@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSliderMoved@CInteractiveObjectSliderCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectDeltaEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnSliderMoved(WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectSliderCapabilities@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectSliderCapabilities@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectSliderCapabilities@@UEAAJI@Z
    virtual long RuntimeClassInitialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SliderMoved@CInteractiveObjectSliderCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectSliderCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectDeltaEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SliderMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SlidersCount@CInteractiveObjectSliderCapabilities@@UEAAJPEAI@Z
    virtual long get_SlidersCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SliderMoved@CInteractiveObjectSliderCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SliderMoved(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectSliderCapabilities@@UEAA@XZ
    virtual ~CInteractiveObjectSliderCapabilities();
};

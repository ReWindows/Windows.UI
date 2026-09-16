#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 33 member(s).
class CInteractiveObjectButtonCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectButtonCapabilities@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectButtonCapabilities@@QEAA@XZ
    CInteractiveObjectButtonCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectButtonCapabilities@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectButtonCapabilities@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectButtonCapabilities@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonHolding@CInteractiveObjectButtonCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectButtonEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnButtonHolding(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonPressed@CInteractiveObjectButtonCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectButtonEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnButtonPressed(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnButtonReleased@CInteractiveObjectButtonCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectButtonEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnButtonReleased(WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectButtonCapabilities@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectButtonCapabilities@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectButtonCapabilities@@UEAAJI@Z
    virtual long RuntimeClassInitialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonHolding@CInteractiveObjectButtonCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectButtonCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectButtonEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonHolding(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonPressed@CInteractiveObjectButtonCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectButtonCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectButtonEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonPressed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ButtonReleased@CInteractiveObjectButtonCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectButtonCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectButtonEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ButtonReleased(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ButtonsCount@CInteractiveObjectButtonCapabilities@@UEAAJPEAI@Z
    virtual long get_ButtonsCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonHolding@CInteractiveObjectButtonCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonHolding(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonPressed@CInteractiveObjectButtonCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonPressed(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ButtonReleased@CInteractiveObjectButtonCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ButtonReleased(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectButtonCapabilities@@UEAA@XZ
    virtual ~CInteractiveObjectButtonCapabilities();
};

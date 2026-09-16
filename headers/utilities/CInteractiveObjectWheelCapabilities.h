#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 21 member(s).
class CInteractiveObjectWheelCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectWheelCapabilities@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectWheelCapabilities@@QEAA@XZ
    CInteractiveObjectWheelCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectWheelCapabilities@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectWheelCapabilities@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectWheelCapabilities@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWheelRotated@CInteractiveObjectWheelCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectDeltaEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnWheelRotated(WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectWheelCapabilities@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectWheelCapabilities@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectWheelCapabilities@@UEAAJI@Z
    virtual long RuntimeClassInitialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WheelRotated@CInteractiveObjectWheelCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectWheelCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectDeltaEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_WheelRotated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WheelsCount@CInteractiveObjectWheelCapabilities@@UEAAJPEAI@Z
    virtual long get_WheelsCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WheelRotated@CInteractiveObjectWheelCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WheelRotated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectWheelCapabilities@@UEAA@XZ
    virtual ~CInteractiveObjectWheelCapabilities();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
class CInteractiveObjectDialCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectDialCapabilities@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectDialCapabilities@@QEAA@XZ
    CInteractiveObjectDialCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectDialCapabilities@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectDialCapabilities@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectDialCapabilities@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDialRotated@CInteractiveObjectDialCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectDeltaEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnDialRotated(WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectDialCapabilities@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectDialCapabilities@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectDialCapabilities@@UEAAJIPEAVCInteractiveObjectDevice@@@Z
    virtual long RuntimeClassInitialize(unsigned int, CInteractiveObjectDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRotationResolution@CInteractiveObjectDialCapabilities@@UEAAJXZ
    virtual long UpdateRotationResolution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DialRotated@CInteractiveObjectDialCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectDialCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectDeltaEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DialRotated(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DialsCount@CInteractiveObjectDialCapabilities@@UEAAJPEAI@Z
    virtual long get_DialsCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HapticsMode@CInteractiveObjectDialCapabilities@@UEAAJPEAW4InteractiveObjectHapticsMode@Input@Internal@UI@Windows@@@Z
    virtual long get_HapticsMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RotationResolution@CInteractiveObjectDialCapabilities@@UEAAJPEAN@Z
    virtual long get_RotationResolution(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HapticsMode@CInteractiveObjectDialCapabilities@@UEAAJW4InteractiveObjectHapticsMode@Input@Internal@UI@Windows@@@Z
    virtual long put_HapticsMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RotationResolution@CInteractiveObjectDialCapabilities@@UEAAJN@Z
    virtual long put_RotationResolution(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DialRotated@CInteractiveObjectDialCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DialRotated(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectDialCapabilities@@UEAA@XZ
    virtual ~CInteractiveObjectDialCapabilities();
};

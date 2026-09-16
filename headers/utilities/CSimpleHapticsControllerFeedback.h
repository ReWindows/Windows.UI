#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 24 member(s).
class CSimpleHapticsControllerFeedback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpleHapticsControllerFeedback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSimpleHapticsControllerFeedback@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSimpleHapticsControllerFeedback@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSimpleHapticsControllerFeedback@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpleHapticsControllerFeedback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpleHapticsControllerFeedback@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSimpleHapticsControllerFeedback@@UEAAJGGUTimeSpan@Foundation@Windows@@@Z
    virtual long RuntimeClassInitialize(unsigned short, unsigned short, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@CSimpleHapticsControllerFeedback@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Duration(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Ordinal@CSimpleHapticsControllerFeedback@@UEAAJPEAG@Z
    virtual long get_Ordinal(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Waveform@CSimpleHapticsControllerFeedback@@UEAAJPEAG@Z
    virtual long get_Waveform(unsigned short *);
};

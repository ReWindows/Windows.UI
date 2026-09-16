#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
class CSimpleHapticsControllerFeedbackPrivateStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpleHapticsControllerFeedbackPrivateStatics@@QEAA@XZ
    CSimpleHapticsControllerFeedbackPrivateStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFeedbackInstance@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAJGGUTimeSpan@Foundation@Windows@@PEAPEAUISimpleHapticsControllerFeedback@Haptics@Devices@4@@Z
    virtual long CreateFeedbackInstance(unsigned short, unsigned short, WindissectOpaque, ::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CSimpleHapticsControllerFeedbackPrivateStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CSimpleHapticsControllerFeedbackPrivateStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpleHapticsControllerFeedbackPrivateStatics@@UEAAKXZ
    virtual unsigned long Release();
};

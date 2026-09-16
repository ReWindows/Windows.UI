#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 28 member(s).
class CSimpleHapticsController {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpleHapticsController@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpleHapticsController@@QEAA@XZ
    CSimpleHapticsController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSimpleHapticsController@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSimpleHapticsController@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSimpleHapticsController@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpleHapticsController@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpleHapticsController@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSimpleHapticsController@@UEAAJPEAUISimpleHapticsControllerPrivate@Haptics@Internal@Devices@Windows@@@Z
    virtual long RuntimeClassInitialize(::Windows::Devices::Internal::Haptics::ISimpleHapticsControllerPrivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedback@CSimpleHapticsController@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Z
    virtual long SendHapticFeedback(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForDuration@CSimpleHapticsController@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@NUTimeSpan@Foundation@5@@Z
    virtual long SendHapticFeedbackForDuration(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForPlayCount@CSimpleHapticsController@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@NHUTimeSpan@Foundation@5@@Z
    virtual long SendHapticFeedbackForPlayCount(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackWithIntensity@CSimpleHapticsController@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@N@Z
    virtual long SendHapticFeedbackWithIntensity(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFeedback@CSimpleHapticsController@@UEAAJXZ
    virtual long StopFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CSimpleHapticsController@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntensitySupported@CSimpleHapticsController@@UEAAJPEAE@Z
    virtual long get_IsIntensitySupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlayCountSupported@CSimpleHapticsController@@UEAAJPEAE@Z
    virtual long get_IsPlayCountSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlayDurationSupported@CSimpleHapticsController@@UEAAJPEAE@Z
    virtual long get_IsPlayDurationSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReplayPauseIntervalSupported@CSimpleHapticsController@@UEAAJPEAE@Z
    virtual long get_IsReplayPauseIntervalSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedFeedback@CSimpleHapticsController@@UEAAJPEAPEAU?$IVectorView@PEAVSimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SupportedFeedback(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleHapticsController@@UEAA@XZ
    virtual ~CSimpleHapticsController();
};

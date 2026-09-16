#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 17 member(s).
class CInteractiveObjectHapticsImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectHapticsImpl@@QEAA@XZ
    CInteractiveObjectHapticsImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectHapticsImpl@@UEAAJKPEAVCInteractiveObjectDevice@@AEAUtagSIMPLEHAPTICSCTRL_DEVICE_INFO@@@Z
    virtual long RuntimeClassInitialize(unsigned long, CInteractiveObjectDevice *, tagSIMPLEHAPTICSCTRL_DEVICE_INFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedback@CInteractiveObjectHapticsImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Z
    virtual long SendHapticFeedback(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForDuration@CInteractiveObjectHapticsImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@NUTimeSpan@Foundation@5@@Z
    virtual long SendHapticFeedbackForDuration(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackForPlayCount@CInteractiveObjectHapticsImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@NHUTimeSpan@Foundation@5@@Z
    virtual long SendHapticFeedbackForPlayCount(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendHapticFeedbackWithIntensity@CInteractiveObjectHapticsImpl@@UEAAJPEAUISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@N@Z
    virtual long SendHapticFeedbackWithIntensity(::Windows::Devices::Haptics::ISimpleHapticsControllerFeedback *, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFeedback@CInteractiveObjectHapticsImpl@@UEAAJXZ
    virtual long StopFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CInteractiveObjectHapticsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntensitySupported@CInteractiveObjectHapticsImpl@@UEAAJPEAE@Z
    virtual long get_IsIntensitySupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlayCountSupported@CInteractiveObjectHapticsImpl@@UEAAJPEAE@Z
    virtual long get_IsPlayCountSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPlayDurationSupported@CInteractiveObjectHapticsImpl@@UEAAJPEAE@Z
    virtual long get_IsPlayDurationSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReplayPauseIntervalSupported@CInteractiveObjectHapticsImpl@@UEAAJPEAE@Z
    virtual long get_IsReplayPauseIntervalSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedFeedback@CInteractiveObjectHapticsImpl@@UEAAJPEAPEAU?$IVectorView@PEAVSimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SupportedFeedback(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectHapticsImpl@@UEAA@XZ
    virtual ~CInteractiveObjectHapticsImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWaveformList@CInteractiveObjectHapticsImpl@@MEAAJPEAU_WAVEFORM_INFO@@J@Z
    virtual long InitializeWaveformList(_WAVEFORM_INFO *, long);
};

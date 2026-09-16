#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 34 member(s).
class CInputHapticsManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputHapticsManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputHapticsManager@@QEAA@XZ
    CInputHapticsManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearOverrideHapticsController@CInputHapticsManager@@UEAAJUHapticsControllerOverrideToken@Haptics@Devices@Windows@@@Z
    virtual long ClearOverrideHapticsController(::Windows::Devices::Haptics::HapticsControllerOverrideToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInputHapticsManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInputHapticsManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInputHapticsManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputHapticsManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputHapticsManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInputHapticsManager@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverrideHapticsController@CInputHapticsManager@@UEAAJW4HapticDeviceType@Haptics@Devices@Windows@@PEAUISimpleHapticsController@345@PEAUHapticsControllerOverrideToken@345@@Z
    virtual long SetOverrideHapticsController(int, ::Windows::Devices::Haptics::ISimpleHapticsController *, ::Windows::Devices::Haptics::HapticsControllerOverrideToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveform@CInputHapticsManager@@UEAAJGGPEAE@Z
    virtual long TrySendHapticWaveform(unsigned short, unsigned short, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveformForDuration@CInputHapticsManager@@UEAAJGGNUTimeSpan@Foundation@Windows@@PEAE@Z
    virtual long TrySendHapticWaveformForDuration(unsigned short, unsigned short, double, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveformForPlayCount@CInputHapticsManager@@UEAAJGGNHUTimeSpan@Foundation@Windows@@PEAE@Z
    virtual long TrySendHapticWaveformForPlayCount(unsigned short, unsigned short, double, int, WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendHapticWaveformWithIntensity@CInputHapticsManager@@UEAAJGGNPEAE@Z
    virtual long TrySendHapticWaveformWithIntensity(unsigned short, unsigned short, double, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStopFeedback@CInputHapticsManager@@UEAAJPEAE@Z
    virtual long TryStopFeedback(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentHapticsController@CInputHapticsManager@@UEAAJPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    virtual long get_CurrentHapticsController(::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentHapticsControllerDeviceType@CInputHapticsManager@@UEAAJPEAW4HapticDeviceType@Haptics@Devices@Windows@@@Z
    virtual long get_CurrentHapticsControllerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThreadId@CInputHapticsManager@@UEAAJPEAI@Z
    virtual long get_ThreadId(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputHapticsManager@@UEAA@XZ
    virtual ~CInputHapticsManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThreadAccess@CInputHapticsManager@@AEAAJXZ
    long CheckThreadAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClassifyWaveform@CInputHapticsManager@@CA?AW4WaveformCategory@1@G@Z
    static int ClassifyWaveform(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentHapticsControllerInfo@CInputHapticsManager@@AEAAJPEAUHapticsControllerInfo@1@@Z
    long GetCurrentHapticsControllerInfo(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeedbackForWaveform@CInputHapticsManager@@AEAAJAEBUHapticsControllerInfo@1@GAEAV?$ComPtr@UISimpleHapticsControllerFeedback@Haptics@Devices@Windows@@@WRL@Microsoft@@@Z
    long GetFeedbackForWaveform(WindissectOpaque const &, unsigned short, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveWaveforms@CInputHapticsManager@@AEAAXAEBUHapticsControllerInfo@1@W4FallbackPreference@1@AEAG2@Z
    void ResolveWaveforms(WindissectOpaque const &, int, unsigned short &, unsigned short &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPenHapticsController@CInputHapticsManager@@AEAAJGPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    long TryGetPenHapticsController(unsigned short, ::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPointerDeviceHapticsController@CInputHapticsManager@@AEAAJPEAXPEAPEAUISimpleHapticsController@Haptics@Devices@Windows@@@Z
    long TryGetPointerDeviceHapticsController(void *, ::Windows::Devices::Haptics::ISimpleHapticsController * *);
};

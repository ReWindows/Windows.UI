#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 30 member(s).
class CInputHapticsManagerStatics {
public:
    class InputHapticsManagerEntry;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputHapticsManagerStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputHapticsManagerStatics@@QEAA@XZ
    CInputHapticsManagerStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCache@CInputHapticsManagerStatics@@SAXXZ
    static void ClearCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeedbackSettings@CInputHapticsManagerStatics@@SAJAEAV?$ComPtr@UIHapticFeedbackSettings@Input@Devices@Internal@Windows@@@WRL@Microsoft@@@Z
    static long GetFeedbackSettings(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@CInputHapticsManagerStatics@@UEAAJPEAPEAUIInputHapticsManager@Haptics@Devices@Windows@@@Z
    virtual long GetForCurrentThread(::Windows::Devices::Haptics::IInputHapticsManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInputHapticsManagerStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInputHapticsManagerStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInputHapticsManagerStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CInputHapticsManagerStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CInputHapticsManagerStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHapticDevicePresent@CInputHapticsManagerStatics@@UEAAJPEAE@Z
    virtual long IsHapticDevicePresent(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CInputHapticsManagerStatics@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreated@CInputHapticsManagerStatics@@SAXPEAVCInputHapticsManager@@@Z
    static void OnCreated(CInputHapticsManager *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputHapticsManagerStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputHapticsManagerStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetForThread@CInputHapticsManagerStatics@@UEAAJIPEAPEAUIInputHapticsManager@Haptics@Devices@Windows@@@Z
    virtual long TryGetForThread(unsigned int, ::Windows::Devices::Haptics::IInputHapticsManager * *);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
class CSimpleHapticsControllerPrivateStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSimpleHapticsControllerPrivateStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpleHapticsControllerPrivateStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpleHapticsControllerPrivateStatics@@QEAA@XZ
    CSimpleHapticsControllerPrivateStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHapticsController@CSimpleHapticsControllerPrivateStatics@@UEAAJPEAUISimpleHapticsControllerPrivate@Haptics@Internal@Devices@Windows@@PEAPEAUISimpleHapticsController@356@@Z
    virtual long CreateHapticsController(::Windows::Devices::Internal::Haptics::ISimpleHapticsControllerPrivate *, ::Windows::Devices::Haptics::ISimpleHapticsController * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSimpleHapticsControllerPrivateStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSimpleHapticsControllerPrivateStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSimpleHapticsControllerPrivateStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CSimpleHapticsControllerPrivateStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CSimpleHapticsControllerPrivateStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpleHapticsControllerPrivateStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpleHapticsControllerPrivateStatics@@UEAAKXZ
    virtual unsigned long Release();
};

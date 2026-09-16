#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 24 member(s).
class CSettingChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSettingChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingChangedEventArgs@@QEAA@XZ
    CSettingChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSettingChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSettingChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSettingChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSettingChangedEventArgs@@UEAAJ_K_J@Z
    virtual long Initialize(uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSettingChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSettingChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@CSettingChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Category(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CSettingChangedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Setting@CSettingChangedEventArgs@@UEAAJPEAI@Z
    virtual long get_Setting(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CSettingChangedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingChangedEventArgs@@UEAA@XZ
    virtual ~CSettingChangedEventArgs();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 23 member(s).
class CCharacterReceivedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCharacterReceivedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCharacterReceivedEventArgs@@QEAA@XZ
    CCharacterReceivedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCharacterReceivedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCharacterReceivedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCharacterReceivedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCharacterReceivedEventArgs@@UEAAJIUCorePhysicalKeyStatus@Core@UI@Windows@@@Z
    virtual long Initialize(unsigned int, WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCharacterReceivedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCharacterReceivedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CCharacterReceivedEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyCode@CCharacterReceivedEventArgs@@UEAAJPEAI@Z
    virtual long get_KeyCode(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyStatus@CCharacterReceivedEventArgs@@UEAAJPEAUCorePhysicalKeyStatus@Core@UI@Windows@@@Z
    virtual long get_KeyStatus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CCharacterReceivedEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

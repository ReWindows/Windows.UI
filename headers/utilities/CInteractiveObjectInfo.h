#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 25 member(s).
class CInteractiveObjectInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectInfo@@QEAA@XZ
    CInteractiveObjectInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectInfo@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectInfo@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectInfo@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInteractiveObjectInfo@@UEAAJIIUPoint@Foundation@Windows@@_KEEEV?$ComPtr@UIInteractiveObjectProperties@Input@Internal@UI@Windows@@@WRL@Microsoft@@@Z
    virtual long RuntimeClassInitialize(unsigned int, unsigned int, WindissectOpaque, uint64_t, unsigned char, unsigned char, unsigned char, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InteractiveObjectId@CInteractiveObjectInfo@@UEAAJPEAI@Z
    virtual long get_InteractiveObjectId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConnected@CInteractiveObjectInfo@@UEAAJPEAE@Z
    virtual long get_IsConnected(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEngaged@CInteractiveObjectInfo@@UEAAJPEAE@Z
    virtual long get_IsEngaged(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInContact@CInteractiveObjectInfo@@UEAAJPEAE@Z
    virtual long get_IsInContact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectInfoId@CInteractiveObjectInfo@@UEAAJPEAI@Z
    virtual long get_ObjectInfoId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CInteractiveObjectInfo@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CInteractiveObjectInfo@@UEAAJPEAPEAUIInteractiveObjectProperties@Input@Internal@UI@Windows@@@Z
    virtual long get_Properties(::Windows::UI::Internal::Input::IInteractiveObjectProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Timestamp@CInteractiveObjectInfo@@UEAAJPEA_K@Z
    virtual long get_Timestamp(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectInfo@@UEAA@XZ
    virtual ~CInteractiveObjectInfo();
};

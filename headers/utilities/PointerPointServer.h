#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 41 member(s).
namespace Windows::UI::Input {
class PointerPointServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PointerPointServer@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PointerPointServer@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerInfo@PointerPointServer@Input@UI@Windows@@UEAAJPEAUtagPOINTER_INFO@@@Z
    virtual long GetPointerInfo(tagPOINTER_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerTypeInfo@PointerPointServer@Input@UI@Windows@@UEAAJPEAUtagPOINTER_TYPE_INFO@@@Z
    virtual long GetPointerTypeInfo(tagPOINTER_TYPE_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PointerPointServer@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PointerPointServer@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PointerPointServer@Input@UI@Windows@@UEAAJPEAUIPointerPointProperties@234@@Z
    virtual long Initialize(::Windows::UI::Input::IPointerPointProperties *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PointerPointServer@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PointerPointServer@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PointerPointServer@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PointerPointServer@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameId@PointerPointServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_FrameId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInContact@PointerPointServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInContact(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPhysicalPositionSupported@PointerPointServer@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsPhysicalPositionSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalPosition@PointerPointServer@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_PhysicalPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDevice@PointerPointServer@Input@UI@Windows@@UEAAJPEAPEAUIPointerDevice@2Devices@4@@Z
    virtual long get_PointerDevice(::Windows::Devices::Input::IPointerDevice * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerId@PointerPointServer@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long get_PointerId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@PointerPointServer@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@PointerPointServer@Input@UI@Windows@@UEAAJPEAPEAUIPointerPointProperties@234@@Z
    virtual long get_Properties(::Windows::UI::Input::IPointerPointProperties * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RawPosition@PointerPointServer@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_RawPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Timestamp@PointerPointServer@Input@UI@Windows@@UEAAJPEA_K@Z
    virtual long get_Timestamp(uint64_t *);
};
} // namespace Windows::UI::Input

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 24 member(s).
class CPointerEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPointerEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPointerEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntermediatePoints@CPointerEventArgs@@UEAAJPEAPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetIntermediatePoints(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPointerEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPointerEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPointerEventArgs@@UEAAJIV?$ComPtr@UIPointerPoint@Input@UI@Windows@@@WRL@Microsoft@@V?$ComPtr@UIPointerPointStatics@Input@UI@Windows@@@34@@Z
    virtual long Initialize(unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Modify@CPointerEventArgs@@QEAAJII_N@Z
    long Modify(unsigned int, unsigned int, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPointerEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPointerEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentPoint@CPointerEventArgs@@UEAAJPEAPEAUIPointerPoint@Input@UI@Windows@@@Z
    virtual long get_CurrentPoint(::Windows::UI::Input::IPointerPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CPointerEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyModifiers@CPointerEventArgs@@UEAAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    virtual long get_KeyModifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CPointerEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

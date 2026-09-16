#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 32 member(s).
class CAcceleratorKeyEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAcceleratorKeyEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAcceleratorKeyEventArgs@@QEAA@XZ
    CAcceleratorKeyEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAcceleratorKeyEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAcceleratorKeyEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAcceleratorKeyEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAcceleratorKeyEventArgs@@UEAAJPEAUtagMSG@@@Z
    virtual long Initialize(tagMSG *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAcceleratorKeyEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAcceleratorKeyEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventType@CAcceleratorKeyEventArgs@@UEAAJPEAW4CoreAcceleratorKeyEventType@Core@UI@Windows@@@Z
    virtual long get_EventType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CAcceleratorKeyEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyStatus@CAcceleratorKeyEventArgs@@UEAAJPEAUCorePhysicalKeyStatus@Core@UI@Windows@@@Z
    virtual long get_KeyStatus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Message@CAcceleratorKeyEventArgs@@UEAAJPEAUtagMSG@@@Z
    virtual long get_Message(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VirtualKey@CAcceleratorKeyEventArgs@@UEAAJPEAW4VirtualKey@System@Windows@@@Z
    virtual long get_VirtualKey(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowHandle@CAcceleratorKeyEventArgs@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_WindowHandle(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CAcceleratorKeyEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
};

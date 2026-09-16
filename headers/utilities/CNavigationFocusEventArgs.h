#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 36 member(s).
class CNavigationFocusEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNavigationFocusEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNavigationFocusEventArgs@@QEAA@XZ
    CNavigationFocusEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CNavigationFocusEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CNavigationFocusEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CNavigationFocusEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CNavigationFocusEventArgs@@UEAAJW4NavigationReason@Core@UI@Windows@@URect@Foundation@5@PEAUHWND__@@I@Z
    virtual long Initialize(int, WindissectOpaque, HWND__*, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNavigationFocusEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNavigationFocusEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CNavigationFocusEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NavigateFocusInfo@CNavigationFocusEventArgs@@UEAAJIPEAX@Z
    virtual long get_NavigateFocusInfo(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Origin@CNavigationFocusEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_Origin(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OriginAnchor@CNavigationFocusEventArgs@@UEAAJPEA_K@Z
    virtual long get_OriginAnchor(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reason@CNavigationFocusEventArgs@@UEAAJPEAW4NavigationReason@Core@UI@Windows@@@Z
    virtual long get_Reason(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestActivation@CNavigationFocusEventArgs@@UEAAJPEAE@Z
    virtual long get_RequestActivation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SequenceNumber@CNavigationFocusEventArgs@@UEAAJPEAU_GUID@@@Z
    virtual long get_SequenceNumber(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CNavigationFocusEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NavigateFocusInfo@CNavigationFocusEventArgs@@UEAAJPEAX@Z
    virtual long put_NavigateFocusInfo(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OriginAnchor@CNavigationFocusEventArgs@@UEAAJ_K@Z
    virtual long put_OriginAnchor(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequestActivation@CNavigationFocusEventArgs@@UEAAJE@Z
    virtual long put_RequestActivation(unsigned char);
};

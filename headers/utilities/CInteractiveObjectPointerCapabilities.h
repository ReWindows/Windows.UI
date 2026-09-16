#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 30 member(s).
class CInteractiveObjectPointerCapabilities {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractiveObjectPointerCapabilities@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractiveObjectPointerCapabilities@@QEAA@XZ
    CInteractiveObjectPointerCapabilities();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInteractiveObjectPointerCapabilities@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInteractiveObjectPointerCapabilities@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInteractiveObjectPointerCapabilities@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactRemoved@CInteractiveObjectPointerCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnContactRemoved(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactStarted@CInteractiveObjectPointerCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnContactStarted(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnObjectMoved@CInteractiveObjectPointerCapabilities@@UEAAJV?$ComPtr@VCInteractiveObjectEventArgs@@@WRL@Microsoft@@@Z
    virtual long OnObjectMoved(WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractiveObjectPointerCapabilities@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractiveObjectPointerCapabilities@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContactRemoved@CInteractiveObjectPointerCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContactRemoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ContactStarted@CInteractiveObjectPointerCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ContactStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ObjectEntered@CInteractiveObjectPointerCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ObjectEntered(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ObjectExited@CInteractiveObjectPointerCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ObjectExited(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ObjectMoved@CInteractiveObjectPointerCapabilities@@UEAAJPEAU?$ITypedEventHandler@PEAVInteractiveObjectPointerCapabilities@Input@Internal@UI@Windows@@PEAVInteractiveObjectEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ObjectMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOnScreenSupported@CInteractiveObjectPointerCapabilities@@UEAAJPEAE@Z
    virtual long get_IsOnScreenSupported(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContactRemoved@CInteractiveObjectPointerCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContactRemoved(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ContactStarted@CInteractiveObjectPointerCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ContactStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ObjectEntered@CInteractiveObjectPointerCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ObjectEntered(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ObjectExited@CInteractiveObjectPointerCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ObjectExited(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ObjectMoved@CInteractiveObjectPointerCapabilities@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ObjectMoved(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractiveObjectPointerCapabilities@@UEAA@XZ
    virtual ~CInteractiveObjectPointerCapabilities();
};

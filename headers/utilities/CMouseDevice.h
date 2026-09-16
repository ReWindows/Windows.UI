#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 22 member(s).
namespace Windows::Devices::Input {
class CMouseDevice {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMouseDevice@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAbsoluteToDelta@CMouseDevice@Input@Devices@Windows@@UEAA_NPEAXPEAUMouseDelta@234@@Z
    virtual bool ConvertAbsoluteToDelta(void *, ::Windows::Devices::Input::MouseDelta *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireMouseMovedEvent@CMouseDevice@Input@Devices@Windows@@UEAA_NPEAUMouseDelta@234@@Z
    virtual bool FireMouseMovedEvent(::Windows::Devices::Input::MouseDelta *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMouseDevice@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMouseDevice@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMouseDevice@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasListeners@CMouseDevice@Input@Devices@Windows@@UEBA_NXZ
    virtual bool HasListeners() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CMouseDevice@Input@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CMouseDevice@Input@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListenerStatusChange@CMouseDevice@Input@Devices@Windows@@UEAAXXZ
    virtual void NotifyListenerStatusChange();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMouseDevice@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMouseDevice@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMouseDevice@Input@Devices@Windows@@UEAAJPEAVCDispatcher@Core@UI@4@@Z
    virtual long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTrackingDevice@CMouseDevice@Input@Devices@Windows@@UEAAXPEAX@Z
    virtual void StopTrackingDevice(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MouseMoved@CMouseDevice@Input@Devices@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVMouseDevice@Input@Devices@Windows@@PEAVMouseEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_MouseMoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MouseMoved@CMouseDevice@Input@Devices@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MouseMoved(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMouseDevice@Input@Devices@Windows@@UEAA@XZ
    virtual ~CMouseDevice();
};
} // namespace Windows::Devices::Input

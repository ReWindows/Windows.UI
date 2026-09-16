#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
class CRadialControllerIndependentInputSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRadialControllerIndependentInputSource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialControllerIndependentInputSource@@QEAA@XZ
    CRadialControllerIndependentInputSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRadialControllerIndependentInputSource@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRadialControllerIndependentInputSource@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRadialControllerIndependentInputSource@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRadialControllerIndependentInputSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRadialControllerIndependentInputSource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRadialControllerIndependentInputSource@@UEAAJEPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(unsigned char, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Controller@CRadialControllerIndependentInputSource@@UEAAJPEAPEAUIRadialController@Input@UI@Windows@@@Z
    virtual long get_Controller(::Windows::UI::Input::IRadialController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@CRadialControllerIndependentInputSource@@UEAAJPEAPEAUICoreDispatcher@Core@UI@Windows@@@Z
    virtual long get_Dispatcher(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@CRadialControllerIndependentInputSource@@UEAAJPEAPEAUIDispatcherQueue@System@Windows@@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRadialControllerIndependentInputSource@@UEAA@XZ
    virtual ~CRadialControllerIndependentInputSource();
};

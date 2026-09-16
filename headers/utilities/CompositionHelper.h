#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 13 member(s).
namespace Windows::UI::Core {
class CompositionHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionHelper@Core@UI@Windows@@QEAA@XZ
    CompositionHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectComposition@CompositionHelper@Core@UI@Windows@@QEAAXXZ
    void DisconnectComposition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionRoot_Classic_Impl@CompositionHelper@Core@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual@@@Z
    virtual long GetCompositionRoot_Classic_Impl(IDCompositionVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionRoot_Impl@CompositionHelper@Core@UI@Windows@@UEAAJPEAPEAUIVisual@Composition@34@@Z
    virtual long GetCompositionRoot_Impl(::Windows::UI::Composition::IVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowScaleChangedEvent_Impl@CompositionHelper@Core@UI@Windows@@QEAAHXZ
    int OnWindowScaleChangedEvent_Impl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionHelper@Core@UI@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionRoot_Classic_Impl@CompositionHelper@Core@UI@Windows@@UEAAJPEAUIDCompositionVisual@@_N@Z
    virtual long SetCompositionRoot_Classic_Impl(IDCompositionVisual *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionRoot_Impl@CompositionHelper@Core@UI@Windows@@UEAAJPEAUIVisual@Composition@34@_N@Z
    virtual long SetCompositionRoot_Impl(::Windows::UI::Composition::IVisual *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionHelper@Core@UI@Windows@@UEAA@XZ
    virtual ~CompositionHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectCompositionInternal@CompositionHelper@Core@UI@Windows@@AEAAXXZ
    void DisconnectCompositionInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleAndRelativeSize@CompositionHelper@Core@UI@Windows@@AEAAJXZ
    long UpdateScaleAndRelativeSize();
};
} // namespace Windows::UI::Core

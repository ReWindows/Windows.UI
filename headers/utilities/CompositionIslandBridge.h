#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 16 member(s).
class CompositionIslandBridge {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionIslandBridge@@QEAA@XZ
    CompositionIslandBridge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectVisual@CompositionIslandBridge@@QEAAXXZ
    void ConnectVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCompositor@CompositionIslandBridge@@QEAAJIPEAUICompositor@Composition@UI@Windows@@@Z
    long InitializeCompositor(unsigned int, ::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDefaultTitleBarDragVisual@CompositionIslandBridge@@QEAAJXZ
    long InitializeDefaultTitleBarDragVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHwnd@CompositionIslandBridge@@QEAAXPEAUHWND__@@PEAUIDCompositionDesktopDevicePartner@@@Z
    void InitializeHwnd(HWND__*, IDCompositionDesktopDevicePartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNavigationPhysicalCoordinates@CompositionIslandBridge@@QEBA_NXZ
    bool IsNavigationPhysicalCoordinates() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNavigationBoundsChanged@CompositionIslandBridge@@QEAAXURect@Foundation@Windows@@@Z
    void NotifyNavigationBoundsChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWindowMetricsChanged@CompositionIslandBridge@@QEAAXMM@Z
    void NotifyWindowMetricsChanged(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProtectContents@CompositionIslandBridge@@QEAAX_N@Z
    void ProtectContents(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualReferenceIdForView@CompositionIslandBridge@@QEAAJXZ
    long SetVisualReferenceIdForView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeCompositor@CompositionIslandBridge@@QEAAXXZ
    void UninitializeCompositor();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionIslandBridge@@QEAA@XZ
    ~CompositionIslandBridge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachInputSink@CompositionIslandBridge@@AEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    long AttachInputSink(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputSink@CompositionIslandBridge@@AEAAJXZ
    long CreateInputSink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationBounds@CompositionIslandBridge@@AEBA_NPEAURect@Foundation@Windows@@@Z
    bool GetNavigationBounds(WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRootVisual@CompositionIslandBridge@@AEAAJXZ
    long InitializeRootVisual();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace Windows::UI::ViewManagement::UISettings {
class ThreadSafeCache {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCache@ThreadSafeCache@UISettings@ViewManagement@UI@Windows@@QEBA?AUOptionalCache@2345@XZ
    WindissectOpaque GetCache() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationsEnabled@ThreadSafeCache@UISettings@ViewManagement@UI@Windows@@QEAAXE@Z
    void UpdateAnimationsEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAutoHideScrollBars@ThreadSafeCache@UISettings@ViewManagement@UI@Windows@@QEAAXE@Z
    void UpdateAutoHideScrollBars(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMessageDuration@ThreadSafeCache@UISettings@ViewManagement@UI@Windows@@QEAAXI@Z
    void UpdateMessageDuration(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextScaleFactor@ThreadSafeCache@UISettings@ViewManagement@UI@Windows@@QEAAXN@Z
    void UpdateTextScaleFactor(double);
};
} // namespace Windows::UI::ViewManagement::UISettings

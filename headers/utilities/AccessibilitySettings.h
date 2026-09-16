#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 22 member(s).
namespace Windows::UI::ViewManagement {
class AccessibilitySettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AccessibilitySettings@ViewManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AccessibilitySettings@ViewManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HighContrastChanged@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAccessibilitySettings@ViewManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_HighContrastChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HighContrast@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_HighContrast(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HighContrastScheme@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HighContrastScheme(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HighContrastChanged@AccessibilitySettings@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HighContrastChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccessibilitySettings@ViewManagement@UI@Windows@@UEAA@XZ
    virtual ~AccessibilitySettings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThemeChanged@AccessibilitySettings@ViewManagement@UI@Windows@@AEAAJPEAUICoreWindow@Core@34@PEAUICoreWindowEventArgs@634@@Z
    long OnThemeChanged(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Windows::UI::ViewManagement

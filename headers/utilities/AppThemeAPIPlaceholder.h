#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 21 member(s).
class AppThemeAPIPlaceholder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppThemeAPIPlaceholder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppThemeAPIPlaceholder@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppThemeAPIPlaceholder@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeColor@AppThemeAPIPlaceholder@@UEAAJW4ThemeAccentColorVariant@ApplicationTheme@@PEAUColor@UI@Windows@@@Z
    virtual long GetThemeColor(int, ::Windows::UI::Color *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppThemeAPIPlaceholder@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppThemeAPIPlaceholder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppThemeAPIPlaceholder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeAccentColor@AppThemeAPIPlaceholder@@UEAAJUColor@UI@Windows@@@Z
    virtual long SetThemeAccentColor(::Windows::UI::Color);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeBaseApplicationColor@AppThemeAPIPlaceholder@@UEAAJUColor@UI@Windows@@@Z
    virtual long SetThemeBaseApplicationColor(::Windows::UI::Color);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeBaseSystemColor@AppThemeAPIPlaceholder@@UEAAJUColor@UI@Windows@@@Z
    virtual long SetThemeBaseSystemColor(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ThemeColorsChanged@AppThemeAPIPlaceholder@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ThemeColorsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdvancedEffectsEnabled@AppThemeAPIPlaceholder@@UEAAJPEAE@Z
    virtual long get_AdvancedEffectsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ThemeColorsChanged@AppThemeAPIPlaceholder@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ThemeColorsChanged(EventRegistrationToken);
};

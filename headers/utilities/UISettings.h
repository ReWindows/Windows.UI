#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 88 member(s).
namespace Windows::UI::ViewManagement {
class UISettings {
public:
    class ThreadSafeCache;
    class ThreadSafeWatcher;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UISettings@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorValue@UISettings@ViewManagement@UI@Windows@@UEAAJW4UIColorType@234@PEAUColor@34@@Z
    virtual long GetColorValue(int, ::Windows::UI::Color *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UISettings@ViewManagement@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UISettings@ViewManagement@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UISettings@ViewManagement@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UISettings@ViewManagement@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@UISettings@ViewManagement@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UISettings@ViewManagement@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UISettings@ViewManagement@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIElementColor@UISettings@ViewManagement@UI@Windows@@UEAAJW4UIElementType@234@PEAUColor@34@@Z
    virtual long UIElementColor(int, ::Windows::UI::Color *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UISettings@ViewManagement@UI@Windows@@QEAA@XZ
    UISettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AdvancedEffectsEnabledChanged@UISettings@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVUISettings@ViewManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_AdvancedEffectsEnabledChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AnimationsEnabledChanged@UISettings@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVUISettings@ViewManagement@UI@Windows@@PEAVUISettingsAnimationsEnabledChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_AnimationsEnabledChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_AutoHideScrollBarsChanged@UISettings@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVUISettings@ViewManagement@UI@Windows@@PEAVUISettingsAutoHideScrollBarsChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_AutoHideScrollBarsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ColorValuesChanged@UISettings@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVUISettings@ViewManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ColorValuesChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MessageDurationChanged@UISettings@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVUISettings@ViewManagement@UI@Windows@@PEAVUISettingsMessageDurationChangedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_MessageDurationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TextScaleFactorChanged@UISettings@ViewManagement@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVUISettings@ViewManagement@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_TextScaleFactorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdvancedEffectsEnabled@UISettings@ViewManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_AdvancedEffectsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnimationsEnabled@UISettings@ViewManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_AnimationsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoHideScrollBars@UISettings@ViewManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_AutoHideScrollBars(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CaretBlinkRate@UISettings@ViewManagement@UI@Windows@@UEAAJPEAI@Z
    virtual long get_CaretBlinkRate(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CaretBrowsingEnabled@UISettings@ViewManagement@UI@Windows@@UEAAJPEAE@Z
    virtual long get_CaretBrowsingEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CaretWidth@UISettings@ViewManagement@UI@Windows@@UEAAJPEAI@Z
    virtual long get_CaretWidth(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CursorSize@UISettings@ViewManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_CursorSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DoubleClickTime@UISettings@ViewManagement@UI@Windows@@UEAAJPEAI@Z
    virtual long get_DoubleClickTime(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HandPreference@UISettings@ViewManagement@UI@Windows@@UEAAJPEAW4HandPreference@234@@Z
    virtual long get_HandPreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MessageDuration@UISettings@ViewManagement@UI@Windows@@UEAAJPEAI@Z
    virtual long get_MessageDuration(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MouseHoverTime@UISettings@ViewManagement@UI@Windows@@UEAAJPEAI@Z
    virtual long get_MouseHoverTime(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollBarArrowSize@UISettings@ViewManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_ScrollBarArrowSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollBarSize@UISettings@ViewManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_ScrollBarSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollBarThumbBoxSize@UISettings@ViewManagement@UI@Windows@@UEAAJPEAUSize@Foundation@4@@Z
    virtual long get_ScrollBarThumbBoxSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TextScaleFactor@UISettings@ViewManagement@UI@Windows@@UEAAJPEAN@Z
    virtual long get_TextScaleFactor(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AdvancedEffectsEnabledChanged@UISettings@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AdvancedEffectsEnabledChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AnimationsEnabledChanged@UISettings@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AnimationsEnabledChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_AutoHideScrollBarsChanged@UISettings@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_AutoHideScrollBarsChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ColorValuesChanged@UISettings@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ColorValuesChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MessageDurationChanged@UISettings@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MessageDurationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TextScaleFactorChanged@UISettings@ViewManagement@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TextScaleFactorChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UISettings@ViewManagement@UI@Windows@@UEAA@XZ
    virtual ~UISettings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchUISettingsCallbacks@UISettings@ViewManagement@UI@Windows@@CAJVWeakRef@WRL@Microsoft@@@Z
    static long DispatchUISettingsCallbacks(::Microsoft::WRL::WeakRef);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAnimationsEnabledCallbacks@UISettings@ViewManagement@UI@Windows@@AEAAJXZ
    long DoAnimationsEnabledCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAutoHideScrollBarCallbacks@UISettings@ViewManagement@UI@Windows@@AEAAJXZ
    long DoAutoHideScrollBarCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMessageDurationCallbacks@UISettings@ViewManagement@UI@Windows@@AEAAJXZ
    long DoMessageDurationCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAppThemeAPI@UISettings@ViewManagement@UI@Windows@@AEAAJXZ
    long EnsureAppThemeAPI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUISettingsChangedWatcher@UISettings@ViewManagement@UI@Windows@@AEAAJXZ
    long EnsureUISettingsChangedWatcher();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemMetricHeightAndWidth@UISettings@ViewManagement@UI@Windows@@AEAAJHHPEAUSize@Foundation@4@@Z
    long GetSystemMetricHeightAndWidth(int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSettingChangeNotification@UISettings@ViewManagement@UI@Windows@@AEAAXXZ
    void HandleSettingChangeNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForThemeChanged@UISettings@ViewManagement@UI@Windows@@AEAAJXZ
    long RegisterForThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveUISettingsToCache@UISettings@ViewManagement@UI@Windows@@AEAAXXZ
    void SaveUISettingsToCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForThemeChanged@UISettings@ViewManagement@UI@Windows@@AEAAXXZ
    void UnregisterForThemeChanged();
};
} // namespace Windows::UI::ViewManagement

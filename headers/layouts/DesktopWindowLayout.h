#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 29 member(s).
namespace Windows::UI::Core {
class DesktopWindowLayout {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesktopWindowLayout@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesktopWindowLayout@Core@UI@Windows@@QEAA@XZ
    DesktopWindowLayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesktopWindowLayout@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesktopWindowLayout@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DesktopWindowLayout@Core@UI@Windows@@QEAAJPEAUIDesktopWindowContentBridge@Private@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DesktopLegacyPositionChanged@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_DesktopLegacyPositionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OrientationChanged@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_OrientationChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ScaleChanged@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_ScaleChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRotationPreferences@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long get_AutoRotationPreferences(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentOrientation@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long get_CurrentOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayScale@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DisplayScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NativeOrientation@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long get_NativeOrientation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RasterizationScale@DesktopWindowLayout@Core@UI@Windows@@UEAAJPEAM@Z
    virtual long get_RasterizationScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRotationPreferences@DesktopWindowLayout@Core@UI@Windows@@UEAAJW4DisplayOrientations@Display@Graphics@4@@Z
    virtual long put_AutoRotationPreferences(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DesktopLegacyPositionChanged@DesktopWindowLayout@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DesktopLegacyPositionChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OrientationChanged@DesktopWindowLayout@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OrientationChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ScaleChanged@DesktopWindowLayout@Core@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ScaleChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopWindowLayout@Core@UI@Windows@@UEAA@XZ
    virtual ~DesktopWindowLayout();
};
} // namespace Windows::UI::Core

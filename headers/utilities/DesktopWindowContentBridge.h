#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 68 member(s).
namespace Windows::UI::Core {
class DesktopWindowContentBridge {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesktopWindowContentBridge@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAUIUIContentRoot@34@@Z
    virtual long Connect(::Windows::UI::IUIContentRoot *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesktopWindowContentBridge@Core@UI@Windows@@QEAA@XZ
    DesktopWindowContentBridge();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAUICompositor@Composition@34@PEAUHWND__@@@Z
    virtual long Initialize(::Windows::UI::Composition::ICompositor *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DesktopWindowContentBridge@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DesktopWindowContentBridge@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesktopWindowContentBridge@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppliedScaleFactor@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAM@Z
    virtual long get_AppliedScaleFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAPEAUIUIContentRoot@34@@Z
    virtual long get_Content(::Windows::UI::IUIContentRoot * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Hwnd@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAPEAUHWND__@@@Z
    virtual long get_Hwnd(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleFactor@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAM@Z
    virtual long get_ScaleFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SystemBackdrop@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAPEAUICompositionBrush@Composition@34@@Z
    virtual long get_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowInformation@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAPEAUIWindowInformation@234@@Z
    virtual long get_WindowInformation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowLayout@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAPEAUIWindowLayout@234@@Z
    virtual long get_WindowLayout(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleFactor@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJM@Z
    virtual long put_ScaleFactor(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SystemBackdrop@DesktopWindowContentBridge@Core@UI@Windows@@UEAAJPEAUICompositionBrush@Composition@34@@Z
    virtual long put_SystemBackdrop(::Windows::UI::Composition::ICompositionBrush *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopWindowContentBridge@Core@UI@Windows@@UEAA@XZ
    virtual ~DesktopWindowContentBridge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyScaleFactor@DesktopWindowContentBridge@Core@UI@Windows@@AEAAJXZ
    long ApplyScaleFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheDpiMode@DesktopWindowContentBridge@Core@UI@Windows@@AEAAXXZ
    void CacheDpiMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckThread@DesktopWindowContentBridge@Core@UI@Windows@@AEAAJXZ
    long CheckThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHwnd@DesktopWindowContentBridge@Core@UI@Windows@@AEAAJPEAUHWND__@@@Z
    long CreateHwnd(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_System_ScaleFactor@DesktopWindowContentBridge@Core@UI@Windows@@AEAAMXZ
    float Get_System_ScaleFactor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Window_ScaleFactor@DesktopWindowContentBridge@Core@UI@Windows@@AEAAMXZ
    float Get_Window_ScaleFactor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidState@DesktopWindowContentBridge@Core@UI@Windows@@AEAAJXZ
    long IsValidState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IslandWindowProc@DesktopWindowContentBridge@Core@UI@Windows@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t IslandWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowResized@DesktopWindowContentBridge@Core@UI@Windows@@AEAAJHH@Z
    long OnWindowResized(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowIslandSite@DesktopWindowContentBridge@Core@UI@Windows@@AEAAJ_N@Z
    long ShowIslandSite(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleFactor@DesktopWindowContentBridge@Core@UI@Windows@@AEAAJM@Z
    long UpdateScaleFactor(float);
};
} // namespace Windows::UI::Core

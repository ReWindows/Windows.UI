#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 7 member(s).
namespace Windows::UI {
class Core {
public:
    class CCoreCursor;
    class CCoreCursorFactory;
    class CCoreDispatcherStatic;
    class CCoreWindowResizeManager;
    class CCoreWindowResizeManagerStatics;
    class CCoreWindowSite;
    class CCoreWindowStatic;
    class CDispatcher;
    class CKeyboardDeliveryInterceptorKeyEventArgs;
    class CWindowServerFactory;
    class ComponentDisplayInformation;
    class ComponentDisplayInformationFactory;
    class ComponentDisplayInformationInternalChangedEventArgs;
    class CompositionHelper;
    class CoreInputBase;
    class CoreInputThreadContext;
    class DesktopWindowContentBridge;
    class DesktopWindowContentBridgeProvider;
    class DesktopWindowInformation;
    class DesktopWindowLayout;
    class ICoreAsyncInfo;
    class PrivateCoreInput;
    class UICoreInit;
    class WindowServer;
    class _InvokeEntry;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiForThread@Core@UI@Windows@@YAMXZ
    float GetDpiForThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowHandle@Core@UI@Windows@@YAPEAUHWND__@@PEAUIInspectable@@@Z
    HWND__* GetWindowHandle(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@Core@UI@Windows@@YAXJG@Z
    void OriginateError(long, unsigned short);
    // Category: Method | Source: PE Export
    // Symbol: ?PrivateCreateCoreWindowSite@Core@UI@Windows@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z
    long PrivateCreateCoreWindowSite(IInspectable *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRegistryDWord@Core@UI@Windows@@YAJPEAUHKEY__@@PEBG1PEAK@Z
    long ReadRegistryDWord(HKEY__*, unsigned short const *, unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenRectToRelative@Core@UI@Windows@@YAJUtagRECT@@PEBUtagINPUT_TRANSFORM@@PEAURect@Foundation@3@@Z
    long ScreenRectToRelative(tagRECT, tagINPUT_TRANSFORM const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowVisualizationHelper@Core@UI@Windows@@YAXPEAUHWND__@@@Z
    void SetWindowVisualizationHelper(HWND__*);
};
} // namespace Windows::UI

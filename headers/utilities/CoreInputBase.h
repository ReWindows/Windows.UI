#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 20 member(s).
namespace Windows::UI::Core {
class CoreInputBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreInputBase@Core@UI@Windows@@QEAA@XZ
    CoreInputBase();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUsingGamepadApiToken@CoreInputBase@Core@UI@Windows@@IEAAJPEAE@Z
    long GetAppUsingGamepadApiToken(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTimeHelper@CoreInputBase@Core@UI@Windows@@IEBAJPEAUDateTime@Foundation@4@@Z
    long GetInputTimeHelper(WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinRTEventArgsFromClosestInteractiveBoundsLPARAM@CoreInputBase@Core@UI@Windows@@KA?AV?$ComPtr@VCClosestInteractiveBoundsRequestedEventArgs@@@WRL@Microsoft@@_J@Z
    static WindissectOpaque GetWinRTEventArgsFromClosestInteractiveBoundsLPARAM(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinRTEventArgsFromOneCoreClosestInteractiveBoundsLPARAM@CoreInputBase@Core@UI@Windows@@KA?AV?$ComPtr@VCClosestInteractiveBoundsRequestedEventArgs@@@WRL@Microsoft@@UCoordinateConversionId@234@_J@Z
    static WindissectOpaque GetWinRTEventArgsFromOneCoreClosestInteractiveBoundsLPARAM(WindissectOpaque, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDirectManipulationHitTestEvent@CoreInputBase@Core@UI@Windows@@IEAAH_J0@Z
    int OnDirectManipulationHitTestEvent(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePointerEventArgs@CoreInputBase@Core@UI@Windows@@IEAAH_K_JPEAPEAUIPointerEventArgs@234@PEAV?$ComPtr@VCPointerEventArgs@@@WRL@Microsoft@@@Z
    int PopulatePointerEventArgs(uint64_t, int64_t, WindissectOpaque * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKeyGeneratedSystemEvents@CoreInputBase@Core@UI@Windows@@IEAAJPEAUIKeyEventArgs@234@E@Z
    long ProcessKeyGeneratedSystemEvents(WindissectOpaque *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWinRTEventArgsBackToClosestInteractiveBoundsLPARAM@CoreInputBase@Core@UI@Windows@@KAXAEBV?$ComPtr@VCClosestInteractiveBoundsRequestedEventArgs@@@WRL@Microsoft@@_J@Z
    static void SetWinRTEventArgsBackToClosestInteractiveBoundsLPARAM(WindissectOpaque const &, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWinRTEventArgsBackToOneCoreClosestInteractiveBoundsLPARAM@CoreInputBase@Core@UI@Windows@@KAXUCoordinateConversionId@234@AEBV?$ComPtr@VCClosestInteractiveBoundsRequestedEventArgs@@@WRL@Microsoft@@_J@Z
    static void SetWinRTEventArgsBackToOneCoreClosestInteractiveBoundsLPARAM(WindissectOpaque, WindissectOpaque const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldGenerateSystemEventForGamepad@CoreInputBase@Core@UI@Windows@@IEAAHXZ
    int ShouldGenerateSystemEventForGamepad();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputTimeForInputMessages@CoreInputBase@Core@UI@Windows@@IEAAXI@Z
    void UpdateInputTimeForInputMessages(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreInputBase@Core@UI@Windows@@MEAA@XZ
    virtual ~CoreInputBase();
};
} // namespace Windows::UI::Core

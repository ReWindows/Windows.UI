#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 9 member(s).
namespace Windows::UI::Input {
class CPointerPointStatics {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPointerPointStatics@Input@UI@Windows@@QEAA@XZ
    CPointerPointStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CPointerPointStatics@Input@UI@Windows@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPoint@CPointerPointStatics@Input@UI@Windows@@EEAAJIPEAPEAUIPointerPoint@234@@Z
    virtual long GetCurrentPoint(unsigned int, ::Windows::UI::Input::IPointerPoint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPointTransformed@CPointerPointStatics@Input@UI@Windows@@EEAAJIPEAUIPointerPointTransform@234@PEAPEAUIPointerPoint@234@@Z
    virtual long GetCurrentPointTransformed(unsigned int, ::Windows::UI::Input::IPointerPointTransform *, ::Windows::UI::Input::IPointerPoint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntermediatePoints@CPointerPointStatics@Input@UI@Windows@@EEAAJIPEAPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long GetIntermediatePoints(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntermediatePointsTransformed@CPointerPointStatics@Input@UI@Windows@@EEAAJIPEAUIPointerPointTransform@234@PEAPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@4@@Z
    virtual long GetIntermediatePointsTransformed(unsigned int, ::Windows::UI::Input::IPointerPointTransform *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointsHelper@CPointerPointStatics@Input@UI@Windows@@AEAAJIPEAUIPointerPointTransform@234@PEAPEAUIPointerPoint@234@PEAPEAU?$IVector@PEAVPointerPoint@Input@UI@Windows@@@Collections@Foundation@4@@Z
    long GetPointsHelper(unsigned int, ::Windows::UI::Input::IPointerPointTransform *, ::Windows::UI::Input::IPointerPoint * *, WindissectOpaque * *);
};
} // namespace Windows::UI::Input

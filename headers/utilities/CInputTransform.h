#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 7 member(s).
class CInputTransform {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInverseAsMatrix3x2@CInputTransform@@QEBAJPEAUD2D_MATRIX_3X2_F@@@Z
    long GetInverseAsMatrix3x2(D2D_MATRIX_3X2_F *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_InferTransformFromWindow@CInputTransform@@QEAAXPEAUHWND__@@W4Inference@1@@Z
    void LegacyTransforms_InferTransformFromWindow(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelativePointToScreen@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z
    TransformedPoint RelativePointToScreen(TransformedPoint const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelativeRectToScreen@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z
    TransformedRect RelativeRectToScreen(TransformedRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z
    TransformedPoint ScreenPointToRelative(TransformedPoint const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenRectToRelative@CInputTransform@@QEAA?AUTransformedRect@@AEBU2@@Z
    TransformedRect ScreenRectToRelative(TransformedRect const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenRectToRelative@CInputTransform@@SA?AUTransformedRect@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z
    static TransformedRect ScreenRectToRelative(TransformedRect const &, tagINPUT_TRANSFORM const &);
};

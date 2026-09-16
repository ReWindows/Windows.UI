#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 3 member(s).
class CMatrix2d {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustAngleSign2dMatrix@CMatrix2d@@SAMPEBUD2D_MATRIX_3X2_F@@M@Z
    static float AdjustAngleSign2dMatrix(D2D_MATRIX_3X2_F const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtractRotation2dMatrix@CMatrix2d@@SA_NPEAUD2D_MATRIX_3X2_F@@@Z
    static bool ExtractRotation2dMatrix(D2D_MATRIX_3X2_F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformAngle2dMatrix@CMatrix2d@@SAMPEBUD2D_MATRIX_3X2_F@@M@Z
    static float TransformAngle2dMatrix(D2D_MATRIX_3X2_F const *, float);
};

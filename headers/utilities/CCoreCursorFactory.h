#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 5 member(s).
namespace Windows::UI::Core {
class CCoreCursorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCoreCursorFactory@Core@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapCursor@CCoreCursorFactory@Core@UI@Windows@@UEAAJIIIIIIPEBEII0IIPEAPEAUICoreCursor@234@@Z
    virtual long CreateBitmapCursor(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursor@CCoreCursorFactory@Core@UI@Windows@@UEAAJW4CoreCursorType@234@IPEAPEAUICoreCursor@234@@Z
    virtual long CreateCursor(int, unsigned int, WindissectOpaque * *);
};
} // namespace Windows::UI::Core

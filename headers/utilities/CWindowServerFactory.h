#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 4 member(s).
namespace Windows::UI::Core {
class CWindowServerFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowServerFactory@Core@UI@Windows@@QEAA@XZ
    CWindowServerFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CWindowServerFactory@Core@UI@Windows@@EEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
};
} // namespace Windows::UI::Core

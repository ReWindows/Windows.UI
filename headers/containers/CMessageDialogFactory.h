#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 6 member(s).
namespace Windows::Internal {
class CMessageDialogFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CMessageDialogFactory@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMessageDialogFactory@Internal@Windows@@QEAA@XZ
    CMessageDialogFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMessageDialogFactory@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIMessageDialog@Popups@UI@3@@Z
    virtual long Create(HSTRING__*, ::Windows::UI::Popups::IMessageDialog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithTitle@CMessageDialogFactory@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIMessageDialog@Popups@UI@3@@Z
    virtual long CreateWithTitle(HSTRING__*, HSTRING__*, ::Windows::UI::Popups::IMessageDialog * *);
};
} // namespace Windows::Internal

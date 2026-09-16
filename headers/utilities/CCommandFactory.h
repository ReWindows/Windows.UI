#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 6 member(s).
class CCommandFactory {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CCommandFactory@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCommandFactory@@EEAAJPEAUHSTRING__@@PEAPEAUIUICommand@Popups@UI@Windows@@@Z
    virtual long Create(HSTRING__*, ::Windows::UI::Popups::IUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithHandler@CCommandFactory@@EEAAJPEAUHSTRING__@@PEAUIUICommandInvokedHandler@Popups@UI@Windows@@PEAPEAUIUICommand@456@@Z
    virtual long CreateWithHandler(HSTRING__*, ::Windows::UI::Popups::IUICommandInvokedHandler *, ::Windows::UI::Popups::IUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithHandlerAndId@CCommandFactory@@EEAAJPEAUHSTRING__@@PEAUIUICommandInvokedHandler@Popups@UI@Windows@@PEAUIInspectable@@PEAPEAUIUICommand@456@@Z
    virtual long CreateWithHandlerAndId(HSTRING__*, ::Windows::UI::Popups::IUICommandInvokedHandler *, IInspectable *, ::Windows::UI::Popups::IUICommand * *);
};

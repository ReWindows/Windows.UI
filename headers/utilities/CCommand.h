#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 24 member(s).
class CCommand {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCommand@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCommand@@QEAA@XZ
    CCommand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCommand@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCommand@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCommand@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CCommand@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CCommand@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCommand@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCommand@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CCommand@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Id(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Invoked@CCommand@@UEAAJPEAPEAUIUICommandInvokedHandler@Popups@UI@Windows@@@Z
    virtual long get_Invoked(::Windows::UI::Popups::IUICommandInvokedHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@CCommand@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Label(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@CCommand@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Id(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Invoked@CCommand@@UEAAJPEAUIUICommandInvokedHandler@Popups@UI@Windows@@@Z
    virtual long put_Invoked(::Windows::UI::Popups::IUICommandInvokedHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Label@CCommand@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Label(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCommand@@UEAA@XZ
    virtual ~CCommand();
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 40 member(s).
namespace Windows::Internal {
class CMessageDialog {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMessageDialog@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMessageDialog@Internal@Windows@@QEAA@XZ
    CMessageDialog();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMessageDialog@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMessageDialog@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMessageDialog@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMessageDialog@Internal@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMessageDialog@Internal@Windows@@UEAAJPEAUICoreWindow@Core@UI@3@@Z
    virtual long Initialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CMessageDialog@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CMessageDialog@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMessageDialog@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMessageDialog@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMessageDialog@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@CMessageDialog@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@3@@Z
    virtual long ShowAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelCommandIndex@CMessageDialog@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_CancelCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@CMessageDialog@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@3@@Z
    virtual long get_Commands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@CMessageDialog@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Content(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultCommandIndex@CMessageDialog@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_DefaultCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Options@CMessageDialog@Internal@Windows@@UEAAJPEAW4MessageDialogOptions@Popups@UI@3@@Z
    virtual long get_Options(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CMessageDialog@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CancelCommandIndex@CMessageDialog@Internal@Windows@@UEAAJI@Z
    virtual long put_CancelCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Content@CMessageDialog@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Content(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultCommandIndex@CMessageDialog@Internal@Windows@@UEAAJI@Z
    virtual long put_DefaultCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Options@CMessageDialog@Internal@Windows@@UEAAJW4MessageDialogOptions@Popups@UI@3@@Z
    virtual long put_Options(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CMessageDialog@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCommandExist@CMessageDialog@Internal@Windows@@AEAAJPEAUIMessageDialogOperation@MessageDialogExperience@PlatformExtensions@23@@Z
    long EnsureCommandExist(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMessageDialog@Internal@Windows@@EEAA@XZ
    virtual ~CMessageDialog();
};
} // namespace Windows::Internal

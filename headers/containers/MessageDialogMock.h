#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
class MessageDialogMock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MessageDialogMock@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MessageDialogMock@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MessageDialogMock@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MessageDialogMock@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageDialogMock@@QEAA@XZ
    MessageDialogMock();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MessageDialogMock@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MessageDialogMock@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MessageDialogMock@@QEAAJPEAUHSTRING__@@0@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsync@MessageDialogMock@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIUICommand@Popups@UI@Windows@@@Foundation@Windows@@@Z
    virtual long ShowAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CancelCommandIndex@MessageDialogMock@@UEAAJPEAI@Z
    virtual long get_CancelCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Commands@MessageDialogMock@@UEAAJPEAPEAU?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Commands(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Content@MessageDialogMock@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Content(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultCommandIndex@MessageDialogMock@@UEAAJPEAI@Z
    virtual long get_DefaultCommandIndex(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Options@MessageDialogMock@@UEAAJPEAW4MessageDialogOptions@Popups@UI@Windows@@@Z
    virtual long get_Options(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@MessageDialogMock@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CancelCommandIndex@MessageDialogMock@@UEAAJI@Z
    virtual long put_CancelCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Content@MessageDialogMock@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Content(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultCommandIndex@MessageDialogMock@@UEAAJI@Z
    virtual long put_DefaultCommandIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Options@MessageDialogMock@@UEAAJW4MessageDialogOptions@Popups@UI@Windows@@@Z
    virtual long put_Options(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@MessageDialogMock@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageDialogMock@@EEAA@XZ
    virtual ~MessageDialogMock();
};

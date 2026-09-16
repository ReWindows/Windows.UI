#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 26 member(s).
namespace Windows::UI::Core {
class CCoreCursor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCoreCursor@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCoreCursor@Core@UI@Windows@@QEAA@XZ
    CCoreCursor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCoreCursor@Core@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCoreCursor@Core@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCoreCursor@Core@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CCoreCursor@Core@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CCoreCursor@Core@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCoreCursor@Core@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCoreCursor@Core@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCoreCursor@Core@UI@Windows@@UEAAJW4CoreCursorType@234@I@Z
    virtual long RuntimeClassInitialize(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCoreCursor@Core@UI@Windows@@UEAAJIIIIIIPEBEII0II@Z
    virtual long RuntimeClassInitialize(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int, unsigned char const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HCursor@CCoreCursor@Core@UI@Windows@@UEAAJPEAPEAUHICON__@@@Z
    virtual long get_HCursor(HICON__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CCoreCursor@Core@UI@Windows@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CCoreCursor@Core@UI@Windows@@UEAAJPEAW4CoreCursorType@234@@Z
    virtual long get_Type(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCoreCursor@Core@UI@Windows@@UEAA@XZ
    virtual ~CCoreCursor();
};
} // namespace Windows::UI::Core

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 18 member(s).
namespace Windows::UI::Input {
class CPointerVisualizationSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPointerVisualizationSettings@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CPointerVisualizationSettings@Input@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CPointerVisualizationSettings@Input@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPointerVisualizationSettings@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBarrelButtonFeedbackEnabled@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsBarrelButtonFeedbackEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsContactFeedbackEnabled@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsContactFeedbackEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsBarrelButtonFeedbackEnabled@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJE@Z
    virtual long put_IsBarrelButtonFeedbackEnabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsContactFeedbackEnabled@CPointerVisualizationSettings@Input@UI@Windows@@UEAAJE@Z
    virtual long put_IsContactFeedbackEnabled(unsigned char);
};
} // namespace Windows::UI::Input

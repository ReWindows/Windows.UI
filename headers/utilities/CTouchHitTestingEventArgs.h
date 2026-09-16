#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 30 member(s).
class CTouchHitTestingEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTouchHitTestingEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchHitTestingEventArgs@@QEAA@XZ
    CTouchHitTestingEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateProximityToPolygon@CTouchHitTestingEventArgs@@UEAAJIPEAUPoint@Foundation@Windows@@PEAUCoreProximityEvaluation@Core@UI@4@@Z
    virtual long EvaluateProximityToPolygon(unsigned int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateProximityToRect@CTouchHitTestingEventArgs@@UEAAJURect@Foundation@Windows@@PEAUCoreProximityEvaluation@Core@UI@4@@Z
    virtual long EvaluateProximityToRect(WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTouchHitTestingEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTouchHitTestingEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTouchHitTestingEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTouchHitTestingEventArgs@@UEAAJPEBUtagTOUCH_HIT_TESTING_INPUT@@@Z
    virtual long Initialize(tagTOUCH_HIT_TESTING_INPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LegacyTransforms_SetWindow@CTouchHitTestingEventArgs@@UEAAJPEAUHWND__@@@Z
    virtual long LegacyTransforms_SetWindow(HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTouchHitTestingEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTouchHitTestingEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoordinateConversionId@CTouchHitTestingEventArgs@@UEAAJAEBUCoordinateConversionId@Core@UI@Windows@@MM@Z
    virtual long SetCoordinateConversionId(WindissectOpaque const &, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdjustedScreenPoint@CTouchHitTestingEventArgs@@UEAAJPEAUtagPOINT@@@Z
    virtual long get_AdjustedScreenPoint(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BoundingBox@CTouchHitTestingEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_BoundingBox(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@CTouchHitTestingEventArgs@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Point@CTouchHitTestingEventArgs@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Point(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProximityEvaluation@CTouchHitTestingEventArgs@@UEAAJPEAUCoreProximityEvaluation@Core@UI@Windows@@@Z
    virtual long get_ProximityEvaluation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@CTouchHitTestingEventArgs@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProximityEvaluation@CTouchHitTestingEventArgs@@UEAAJUCoreProximityEvaluation@Core@UI@Windows@@@Z
    virtual long put_ProximityEvaluation(WindissectOpaque);
};

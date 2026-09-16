#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 33 member(s).
namespace Windows::UI::Input {
class CMouseWheelParameters {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMouseWheelParameters@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMouseWheelParameters@Input@UI@Windows@@QEAA@XZ
    CMouseWheelParameters();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMouseWheelParameters@Input@UI@Windows@@UEAAJUPoint@Foundation@4@MM0@Z
    virtual long Initialize(WindissectOpaque, float, float, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirtyCharTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAH@Z
    virtual long IsDirtyCharTranslation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirtyDeltaRotation@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAH@Z
    virtual long IsDirtyDeltaRotation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirtyDeltaScale@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAH@Z
    virtual long IsDirtyDeltaScale(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirtyPageTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAH@Z
    virtual long IsDirtyPageTranslation(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMouseWheelParameters@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMouseWheelParameters@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotDirtyCharTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJXZ
    virtual long SetNotDirtyCharTranslation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotDirtyDeltaRotation@CMouseWheelParameters@Input@UI@Windows@@UEAAJXZ
    virtual long SetNotDirtyDeltaRotation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotDirtyDeltaScale@CMouseWheelParameters@Input@UI@Windows@@UEAAJXZ
    virtual long SetNotDirtyDeltaScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotDirtyPageTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJXZ
    virtual long SetNotDirtyPageTranslation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CharTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_CharTranslation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaRotationAngle@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DeltaRotationAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeltaScale@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_DeltaScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PageTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJPEAUPoint@Foundation@4@@Z
    virtual long get_PageTranslation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CharTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJUPoint@Foundation@4@@Z
    virtual long put_CharTranslation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeltaRotationAngle@CMouseWheelParameters@Input@UI@Windows@@UEAAJM@Z
    virtual long put_DeltaRotationAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeltaScale@CMouseWheelParameters@Input@UI@Windows@@UEAAJM@Z
    virtual long put_DeltaScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PageTranslation@CMouseWheelParameters@Input@UI@Windows@@UEAAJUPoint@Foundation@4@@Z
    virtual long put_PageTranslation(WindissectOpaque);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMouseWheelParameters@Input@UI@Windows@@EEAA@XZ
    virtual ~CMouseWheelParameters();
};
} // namespace Windows::UI::Input

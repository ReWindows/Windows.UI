#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 24 member(s).
class CInternalCoordinateConversionStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInternalCoordinateConversionStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInternalCoordinateConversionStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInternalCoordinateConversionStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInternalCoordinateConversionStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CInternalCoordinateConversionStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CInternalCoordinateConversionStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInternalCoordinateConversionStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInternalCoordinateConversionStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInternalCoordinateConversionStatics@@UEAA@XZ
    virtual ~CInternalCoordinateConversionStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CInternalCoordinateConversionStatics@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCoordinateConversionIdForView@CInternalCoordinateConversionStatics@@EEAAJI@Z
    virtual long ClearCoordinateConversionIdForView(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearVisualReferenceIdForView@CInternalCoordinateConversionStatics@@EEAAJI@Z
    virtual long ClearVisualReferenceIdForView(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoordinateConversionIdForView@CInternalCoordinateConversionStatics@@EEAAJIPEAUCoordinateConversionId@Core@UI@Windows@@@Z
    virtual long GetCoordinateConversionIdForView(unsigned int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualReferenceIdForView@CInternalCoordinateConversionStatics@@EEAAJIPEA_K@Z
    virtual long GetVisualReferenceIdForView(unsigned int, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoordinateConversionIdForView@CInternalCoordinateConversionStatics@@EEAAJIUCoordinateConversionId@Core@UI@Windows@@@Z
    virtual long SetCoordinateConversionIdForView(unsigned int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualReferenceIdForView@CInternalCoordinateConversionStatics@@EEAAJI_K@Z
    virtual long SetVisualReferenceIdForView(unsigned int, uint64_t);
};

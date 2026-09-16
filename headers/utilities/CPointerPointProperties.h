#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 75 member(s).
namespace Windows::UI::Input {
class CPointerPointProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPointerPointProperties@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRemovePointerFlags@CPointerPointProperties@Input@UI@Windows@@UEAAJII@Z
    virtual long AddRemovePointerFlags(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameId@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long GetFrameId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHimetricRawPosition@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetHimetricRawPosition(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTransform@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAUPOINTERPOINTINPUTTRANSFORM@@@Z
    virtual long GetInputTransform(POINTERPOINTINPUTTRANSFORM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTransformInverse@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAUPOINTERPOINTINPUTTRANSFORM@@@Z
    virtual long GetInputTransformInverse(POINTERPOINTINPUTTRANSFORM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsInContact@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long GetIsInContact(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelRawPosition@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAUtagPOINT@@@Z
    virtual long GetPixelRawPosition(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDevice@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAPEAUIPrivatePointerDevice@@@Z
    virtual long GetPointerDevice(IPrivatePointerDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerId@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAI@Z
    virtual long GetPointerId(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerInfo@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAUtagPOINTER_INFO@@@Z
    virtual long GetPointerInfo(tagPOINTER_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerTypeInfo@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAUtagPOINTER_TYPE_INFO@@@Z
    virtual long GetPointerTypeInfo(tagPOINTER_TYPE_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAM0@Z
    virtual long GetPosition(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRawPosition@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAM0@Z
    virtual long GetRawPosition(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimestamp@CPointerPointProperties@Input@UI@Windows@@UEAAJPEA_K@Z
    virtual long GetTimestamp(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetTransform(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsageValue@CPointerPointProperties@Input@UI@Windows@@UEAAJIIPEAH@Z
    virtual long GetUsageValue(unsigned int, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUsage@CPointerPointProperties@Input@UI@Windows@@UEAAJIIPEAE@Z
    virtual long HasUsage(unsigned int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPointerPointProperties@Input@UI@Windows@@UEAAJPEBUtagPOINTER_INFO@@PEBUtagPOINTER_TYPE_INFO@@PEAUIPointerPointTransform@234@IPEAJUPoint@Foundation@4@4URect@94@5PEBUtagINPUT_TRANSFORM@@UtagPOINT@@7M_KPEAUIPrivatePointerDevice@@@Z
    virtual long Initialize(tagPOINTER_INFO const *, tagPOINTER_TYPE_INFO const *, ::Windows::UI::Input::IPointerPointTransform *, unsigned int, long *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, tagINPUT_TRANSFORM const *, tagPOINT, tagPOINT, float, uint64_t, IPrivatePointerDevice *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPointerPointProperties@Input@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPointerPointProperties@Input@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTimestamp@CPointerPointProperties@Input@UI@Windows@@UEAAJXZ
    virtual long UpdateTimestamp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactRect@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_ContactRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContactRectRaw@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_ContactRectRaw(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsBarrelButtonPressed@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsBarrelButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCanceled@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsCanceled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEraser@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsEraser(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHorizontalMouseWheel@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsHorizontalMouseWheel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInRange@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInRange(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInverted@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInverted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLeftButtonPressed@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsLeftButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMiddleButtonPressed@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsMiddleButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPrimary@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsPrimary(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRightButtonPressed@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsRightButtonPressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsXButton1Pressed@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsXButton1Pressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsXButton2Pressed@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsXButton2Pressed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MouseWheelDelta@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAH@Z
    virtual long get_MouseWheelDelta(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Orientation@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Orientation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerUpdateKind@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAW4PointerUpdateKind@234@@Z
    virtual long get_PointerUpdateKind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Pressure@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Pressure(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TouchConfidence@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAE@Z
    virtual long get_TouchConfidence(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Twist@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Twist(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_XTilt@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_XTilt(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_YTilt@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAM@Z
    virtual long get_YTilt(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZDistance@CPointerPointProperties@Input@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@4@@Z
    virtual long get_ZDistance(WindissectOpaque * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNormalizedValue@CPointerPointProperties@Input@UI@Windows@@AEAAMIIMMMPEA_N@Z
    float GetNormalizedValue(unsigned int, unsigned int, float, float, float, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUsageInfo@CPointerPointProperties@Input@UI@Windows@@AEAAHIIPEAUPointerDeviceUsage@2Devices@4@@Z
    int GetUsageInfo(unsigned int, unsigned int, ::Windows::Devices::Input::PointerDeviceUsage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformRotation@CPointerPointProperties@Input@UI@Windows@@AEAAXPEAM@Z
    void TransformRotation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformTilt@CPointerPointProperties@Input@UI@Windows@@AEAAXPEAM0@Z
    void TransformTilt(float *, float *);
};
} // namespace Windows::UI::Input

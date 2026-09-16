#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 46 member(s).
namespace Windows::Devices::Input {
class PointerDeviceServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PointerDeviceServer@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEBUtagPOINTER_INFO@@@Z
    virtual long Initialize(tagPOINTER_INFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PointerDeviceServer@Input@Devices@Windows@@UEAAJAEAUtagPOINTER_DEVICE_INFO@@@Z
    virtual long Initialize(tagPOINTER_DEVICE_INFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PointerDeviceServer@Input@Devices@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PointerDeviceServer@Input@Devices@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PointerDeviceServer@Input@Devices@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PointerDeviceServer@Input@Devices@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxPointersWithZDistance@PointerDeviceServer@Input@Devices@Windows@@UEAAJXZ
    virtual long SetMaxPointersWithZDistance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceHandle@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAPEAX@Z
    virtual long get_DeviceHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayOrientation@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAK@Z
    virtual long get_DisplayOrientation(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HDevice@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEA_K@Z
    virtual long get_HDevice(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDeviceHandleSupported@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAH@Z
    virtual long get_IsDeviceHandleSupported(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntegrated@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAE@Z
    virtual long get_IsIntegrated(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxContacts@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAI@Z
    virtual long get_MaxContacts(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxPointersWithZDistance@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAI@Z
    virtual long get_MaxPointersWithZDistance(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PhysicalDeviceRect@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_PhysicalDeviceRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PointerDeviceType@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAW4PointerDeviceType@234@@Z
    virtual long get_PointerDeviceType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScreenRect@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_ScreenRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedUsages@PointerDeviceServer@Input@Devices@Windows@@UEAAJPEAPEAU?$IVectorView@UPointerDeviceUsage@Input@Devices@Windows@@@Collections@Foundation@4@@Z
    virtual long get_SupportedUsages(WindissectOpaque * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMouseUsages@PointerDeviceServer@Input@Devices@Windows@@EEAAJXZ
    virtual long SetMouseUsages();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangles@PointerDeviceServer@Input@Devices@Windows@@EEAAJXZ
    virtual long SetRectangles();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUsages@PointerDeviceServer@Input@Devices@Windows@@EEAAJXZ
    virtual long SetUsages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformScreenRect@PointerDeviceServer@Input@Devices@Windows@@EEAAJPEAURect@Foundation@4@@Z
    virtual long TransformScreenRect(WindissectOpaque *);
};
} // namespace Windows::Devices::Input

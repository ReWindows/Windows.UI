#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 13 member(s).
namespace Windows::UI::Core {
class CoreInputThreadContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CoreInputThreadContext@Core@UI@Windows@@SAXW4_COREINPUT_TYPE@@HPEAPEAV1234@@Z
    static void Create(int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputInfoForThread@CoreInputThreadContext@Core@UI@Windows@@SAHPEAPEAV1234@@Z
    static int GetInputInfoForThread(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessAttach@CoreInputThreadContext@Core@UI@Windows@@SAXXZ
    static void OnProcessAttach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessDetach@CoreInputThreadContext@Core@UI@Windows@@SAXXZ
    static void OnProcessDetach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCoreInput@CoreInputThreadContext@Core@UI@Windows@@QEAAXW4_COREINPUT_TYPE@@@Z
    void RemoveCoreInput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CoreInputThreadContext@Core@UI@Windows@@UEAAJW4_COREINPUT_TYPE@@H@Z
    virtual long RuntimeClassInitialize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCoreInput@CoreInputThreadContext@Core@UI@Windows@@QEAAJW4_COREINPUT_TYPE@@@Z
    long UpdateCoreInput(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreInputThreadContext@Core@UI@Windows@@UEAA@XZ
    virtual ~CoreInputThreadContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCoreInput@CoreInputThreadContext@Core@UI@Windows@@AEAAJW4_COREINPUT_TYPE@@@Z
    long InitializeCoreInput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadExit@CoreInputThreadContext@Core@UI@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void OnThreadExit(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadExitCallback@CoreInputThreadContext@Core@UI@Windows@@AEAAXXZ
    void RegisterThreadExitCallback();
};
} // namespace Windows::UI::Core

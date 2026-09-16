#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 9 member(s).
class CoreInputSink {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CoreInputSink@@QEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@CoreInputSink@@QEAAPEAXXZ
    void * Detach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Handle@CoreInputSink@@QEAAPEAXXZ
    void * Handle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputSource@CoreInputSink@@QEAAJPEAUHWND__@@PEAUIUnknown@@I_NI@Z
    long SetInputSource(HWND__*, IUnknown *, unsigned int, bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreInputSink@@QEAA@XZ
    ~CoreInputSink();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInputSinkEntry@CoreInputSink@@AEAAJPEAUIDCompositionVisualPartner@@PEAUIVisual@Composition@UI@Windows@@PEAPEAU_InputSinkEntry@@@Z
    long AddInputSinkEntry(IDCompositionVisualPartner *, ::Windows::UI::Composition::IVisual *, _InputSinkEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInputSinkEntry@CoreInputSink@@AEAA_NPEAUIDCompositionVisualPartner@@PEAUIVisual@Composition@UI@Windows@@PEAPEAU_InputSinkEntry@@@Z
    bool FindInputSinkEntry(IDCompositionVisualPartner *, ::Windows::UI::Composition::IVisual *, _InputSinkEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInputSinkEntry@CoreInputSink@@AEAAIPEAU_InputSinkEntry@@@Z
    unsigned int RemoveInputSinkEntry(_InputSinkEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAndRegisterInputSink@CoreInputSink@@AEAAJIPEAUHWND__@@_NIPEAU_InputSinkEntry@@@Z
    long UpdateAndRegisterInputSink(unsigned int, HWND__*, bool, unsigned int, _InputSinkEntry *);
};

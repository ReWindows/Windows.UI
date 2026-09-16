#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.UI.dll by Windissect. 6 member(s).
class IslandEnvironmentOwner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@IslandEnvironmentOwner@@QEAAXXZ
    void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIslandEnvironment@IslandEnvironmentOwner@@QEAAJPEAPEAUICompositionIslandEnvironment@Composition@UI@Windows@@@Z
    long GetIslandEnvironment(::Windows::UI::Composition::ICompositionIslandEnvironment * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IslandEnvironmentOwner@@QEAA@XZ
    IslandEnvironmentOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMetrics@IslandEnvironmentOwner@@QEAAXMM@Z
    void UpdateMetrics(float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IslandEnvironmentOwner@@QEAA@XZ
    ~IslandEnvironmentOwner();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMetricsWorker@IslandEnvironmentOwner@@AEAAXXZ
    void UpdateMetricsWorker();
};

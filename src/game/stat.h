#pragma once
#include <array>
#include <cstddef>

namespace game {
enum class CoreStat { Vitality, Armor, Agility, Strength, Count };
enum class DerivedStat { MaxHealth, PhysicalDamage, PhysicalDefense, AttackSpeed, Count };

class Stats {
public:
    void set(CoreStat core_stat, double value);
    double get(DerivedStat derived_stat) const;

private:
    std::array<double, count<CoreStat>()> core_stats;
    std::array<double, count<DerivedStat>()> derived_stats;
    mutable bool is_dirty = true;
    void recalculate_derived_stats() const;
};
} // namespace game
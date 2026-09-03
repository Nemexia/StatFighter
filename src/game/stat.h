#pragma once
#include <array>
#include <cstddef>

namespace game {
enum class CoreStat { Vitality, Armor, Agility, Strength, Count };
enum class DerivedStat { MaxHealth, PhysicalDamage, PhysicalDefense, AttackSpeed, Count };

template <typename T>
constexpr std::size_t count() {
    return static_cast<std::size_t>(T::Count);
}

template <typename T>
constexpr std::size_t to_index(T t) {
    return static_cast<std::size_t>(t);
}

class Stats {
public:
    void set(CoreStat core_stat, double value);
    void get(DerivedStat derived_stat) const;

private:
    std::array<double, count<CoreStat>()> core_stats;
    std::array<double, count<DerivedStat>()> derived_stats;
};
} // namespace game
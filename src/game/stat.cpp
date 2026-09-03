#include "stat.h"

namespace game {

template <typename T>
constexpr std::size_t count() {
    return static_cast<std::size_t>(T::Count);
}

template <typename T>
constexpr std::size_t to_index(T t) {
    return static_cast<std::size_t>(t);
}

void Stats::set(CoreStat core_stat, double value) {
    core_stats[to_index(core_stat)] = value;
    is_dirty = true;
}

double Stats::get(DerivedStat derived_stat) const {
    if (is_dirty) {
        recalculate_derived_stats();
        is_dirty = false;
    }
    return derived_stats[to_index(derived_stat)];
}

void Stats::recalculate_derived_stats() const {}
} // namespace game

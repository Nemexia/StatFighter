#pragma once

namespace game {

enum class Wave { NormalFirst, NormalSecond, Miniboss, NormalThird, NormalFourth, Boss };

constexpr double wave_multiplier(Wave wave) {
    switch (wave) {
    case Wave::NormalFirst:
        return 0.6;
    case Wave::NormalSecond:
        return 0.7;
    case Wave::Miniboss:
        return 1;
    case Wave::NormalThird:
        return 0.8;
    case Wave::NormalFourth:
        return 0.9;
    case Wave::Boss:
        return 1.5;
    default:
        return 1.0;
    }
}

constexpr int level_points(int level) {
    return 10 + 2 * level;
}

class Progression {
public:
    int player_total_points() const { return level_points(level); }

    int enemy_total_points() const { return static_cast<int>(level_points(level) * wave_multiplier(wave)); }

private:
    int level;
    Wave wave;
};

} // namespace game

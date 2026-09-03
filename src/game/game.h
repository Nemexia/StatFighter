#pragma once

namespace game {
class Game {
public:
    void step();

private:
    Arena arena_;
    Progression progression_;
};
} // namespace game
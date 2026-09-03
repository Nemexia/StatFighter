#pragma once
#include "../game/game.h"

namespace game {
class Application {
public:
    Application();
    void run();

private:
    void update(float dt);
    void render();
    Game game_;
};
} // namespace game
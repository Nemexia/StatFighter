#include "application.h"

#include <raylib.h>
#include <string>

namespace game {
Application::Application() {
    InitWindow(800, 600, "StatFighter");
    SetTargetFPS(60);
}

void Application::run() {
    game_.player.stats.set(CoreStat::Vitality, 10);
    game_.player.stats.set(CoreStat::Armor, 10);
    game_.player.stats.set(CoreStat::Agility, 10);
    game_.player.stats.set(CoreStat::Strength, 10);

    game_.enemy.stats.set(CoreStat::Vitality, 10);
    game_.enemy.stats.set(CoreStat::Armor, 10);
    game_.enemy.stats.set(CoreStat::Agility, 10);
    game_.enemy.stats.set(CoreStat::Strength, 10);

    while (!WindowShouldClose()) {
        const float dt = GetFrameTime();
        update(dt);
        render();
    }
    CloseWindow();
}

void Application::update(float dt) {
    // TODOES
    DrawText(("Update function called with dt: " + std::to_string(dt)).data(), 10, 40, 20, DARKGRAY);
}

void Application::render() {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("StatFighter", 10, 10, 20, DARKGRAY);
    EndDrawing();
}
} // namespace game

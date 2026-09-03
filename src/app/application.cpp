#include "application.h"

#include <raylib.h>

namespace game {
Application::Application() {
    InitWindow(800, 600, "StatFighter");
    SetTargetFPS(60);
}

void Application::run() {
    while (!WindowShouldClose()) {
        const float dt = GetFrameTime();
        update(dt);
        render();
    }
    CloseWindow();
}

void Application::update(float dt) {
    // TODOES
}

void Application::render() {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("StatFighter", 10, 10, 20, DARKGRAY);
    EndDrawing();
}
} // namespace game

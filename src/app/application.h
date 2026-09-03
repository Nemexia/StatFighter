#pragma once

namespace game {
class Application {
 public:
  Application();
  void run();

 private:
  void update(float dt);
  void render();
};
}  // namespace game
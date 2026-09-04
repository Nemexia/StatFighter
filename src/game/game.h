#pragma once
#include "character.h"
#include "progression.h"

namespace game {
struct Game {
    Character player;
    Character enemy;
    Progression progression;
};
} // namespace game
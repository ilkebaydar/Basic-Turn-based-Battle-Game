#ifndef BASIC_TURN_BASED_GAME_DAGGER_H
#define BASIC_TURN_BASED_GAME_DAGGER_H

#include "Weapon.h"
#include <cstdlib>

class Dagger: public Weapon{
public:
    Dagger();
    void attack(Enemy &enemy) override;
};
#endif //BASIC_TURN_BASED_GAME_DAGGER_H

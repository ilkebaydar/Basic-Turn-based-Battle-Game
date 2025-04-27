#ifndef BASIC_TURN_BASED_GAME_SWORD_H
#define BASIC_TURN_BASED_GAME_SWORD_H

#include "Weapon.h"

class Sword: public Weapon{
public:
    Sword();
    void attack(Enemy &enemy) override;
};

#endif //BASIC_TURN_BASED_GAME_SWORD_H

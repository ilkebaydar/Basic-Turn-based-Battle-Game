#ifndef BASIC_TURN_BASED_GAME_WEAPON_H
#define BASIC_TURN_BASED_GAME_WEAPON_H

#include "Enemy.h"

class Weapon{
protected:
    int damage;
    void updateDamage(int amount);

public:
    Weapon();
    virtual void attack(Enemy &enemy) =0;
    virtual ~Weapon() =default;
};

#endif //BASIC_TURN_BASED_GAME_WEAPON_H

#ifndef BASIC_TURN_BASED_GAME_PLAYER_H
#define BASIC_TURN_BASED_GAME_PLAYER_H

#include "Sword.h"
#include "Dagger.h"
#include "Enemy.h"

class Player {
protected:
    int health;
    Sword sword;
    Dagger dagger;
    bool selectedWeapon; // 0->sword, 1->dagger
    void updateHealth(int amount);

public:
    Player();
    void selectWeapon(bool select);
    void attack(Enemy &enemy);
    bool isAlive() const;
    virtual  void defend(int damage) =0;
    virtual ~Player() = default;
};

#endif //BASIC_TURN_BASED_GAME_PLAYER_H

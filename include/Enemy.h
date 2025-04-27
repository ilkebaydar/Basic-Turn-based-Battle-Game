#ifndef BASIC_TURN_BASED_GAME_ENEMY_H
#define BASIC_TURN_BASED_GAME_ENEMY_H

class Enemy{
protected:
    int health;
    void updateHealth(int amount);

public:
    Enemy();
    void defend(int damage);
    bool isAlive();
};
#endif //BASIC_TURN_BASED_GAME_ENEMY_H

#include "../include/Dagger.h"

Dagger::Dagger() {
    damage =30;
}

void Dagger::attack(Enemy &enemy) {
    enemy.defend(damage);
    //50% chance
    if(rand() %2 ==0) {
        enemy.defend(damage);
    }
}
#include "../include/Sword.h"

Sword::Sword() {
    damage =60;
}

void Sword::attack(Enemy &enemy) {
    enemy.defend(damage);
    if(damage> 30){
        updateDamage(-5);
    }
}

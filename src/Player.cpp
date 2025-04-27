#include "../include/Player.h"

//health is 300 and selected weapon is sword by default
Player::Player() : health(300), selectedWeapon(0){}

void Player::updateHealth(int amount) {
    health += amount;
}

void Player::selectWeapon(bool select){
    selectedWeapon = select;
}

void Player::attack(Enemy &enemy) {
    if(selectedWeapon== 0) sword.attack(enemy);
    else dagger.attack(enemy);
}

bool Player::isAlive() const {
    return health > 0;
}
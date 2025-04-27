#include "../include/Enemy.h"

Enemy::Enemy() :health(300){} // current health 300 by default

void Enemy::updateHealth(int amount) {
    health += amount;
}

bool Enemy::isAlive() {
    return health > 0;
}

void Enemy::defend(int damage) {
    updateHealth(-damage);
}


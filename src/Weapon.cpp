#include "../include/Weapon.h"

Weapon::Weapon() : damage(40){} // Weapon’s current damage value (40 by default)

void Weapon::updateDamage(int amount) {
    damage += amount;
}
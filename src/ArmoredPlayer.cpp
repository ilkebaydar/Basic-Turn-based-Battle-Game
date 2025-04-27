#include "../include/ArmoredPlayer.h"

ArmoredPlayer::ArmoredPlayer() : isFirstDefence(true){}

void ArmoredPlayer::defend(int damage) {
    if(isFirstDefence){
        isFirstDefence = false;
    } else {
        int reducedDamage = damage * 80/100; // 20% less
        updateHealth(-reducedDamage);
    }
}
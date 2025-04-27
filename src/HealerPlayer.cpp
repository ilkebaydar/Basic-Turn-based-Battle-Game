#include "../include/HealerPlayer.h"

HealerPlayer::HealerPlayer() = default;

void HealerPlayer::defend(int damage) {
    if(rand() %20 ==0){ //5% chance
        updateHealth(20); // small amount healing
    } else {
        updateHealth(-damage);
    }
}
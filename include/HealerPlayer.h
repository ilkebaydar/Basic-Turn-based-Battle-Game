#ifndef BASIC_TURN_BASED_GAME_HEALERPLAYER_H
#define BASIC_TURN_BASED_GAME_HEALERPLAYER_H

#include "Player.h"
#include <cstdlib>

class HealerPlayer: public Player{
public:
    HealerPlayer();
    void defend(int damage) override;

};
#endif //BASIC_TURN_BASED_GAME_HEALERPLAYER_H

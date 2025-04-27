#ifndef BASIC_TURN_BASED_GAME_ARMOREDPLAYER_H
#define BASIC_TURN_BASED_GAME_ARMOREDPLAYER_H

#include "Player.h"

class ArmoredPlayer : public Player {
protected:
    bool isFirstDefence;
public:
    ArmoredPlayer();
    void defend(int damage) override;

};
#endif //BASIC_TURN_BASED_GAME_ARMOREDPLAYER_H

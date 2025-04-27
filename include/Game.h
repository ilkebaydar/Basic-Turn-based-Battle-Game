#ifndef BASIC_TURN_BASED_GAME_GAME_H
#define BASIC_TURN_BASED_GAME_GAME_H

#include "ArmoredPlayer.h"
#include "HealerPlayer.h"
#include "Enemy.h"

class Game{
private:
    ArmoredPlayer armoredPlayer;
    HealerPlayer healerPlayer;
    bool selectedPlayer;
    Enemy enemy;

public:
    Game();
    bool gameEnded;
    void selectPlayer(bool select);
    void playTurn();
};
#endif //BASIC_TURN_BASED_GAME_GAME_H

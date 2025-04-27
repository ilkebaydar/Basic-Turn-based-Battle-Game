#include "../include/Game.h"
#include <iostream>

//selected player is armored player by default
Game::Game() : selectedPlayer(0), gameEnded(false){}

void Game ::selectPlayer(bool select) {
    selectedPlayer = select;
}

void Game::playTurn() {
    if(selectedPlayer==0) armoredPlayer.attack(enemy);
    else healerPlayer.attack(enemy);

    if(!enemy.isAlive()) {
        std::cout << "Enemy defeated!"<< std::endl;
        gameEnded = true;
        return;
    }

    int enemyAttackDamage = 50 + (rand() %21); // 50-70 random damage


    if(selectedPlayer==0) armoredPlayer.defend(enemyAttackDamage);
    else healerPlayer.defend(enemyAttackDamage);

    if(selectedPlayer==0 && !armoredPlayer.isAlive()){
        std::cout << "Player defeated!" << std::endl;
        gameEnded = true;
    } else if(selectedPlayer == 1 && !healerPlayer.isAlive()) {
        std::cout << "Player defeated!" << std::endl;
        gameEnded = true;
    }
}
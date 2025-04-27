#include <iostream>
#include "../include/Game.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(0));

    bool weaponChoice, playerChoice;
    ArmoredPlayer armoredPlayer;
    HealerPlayer healerPlayer;
    Game game;
    cout << "Select player (0 for Armored, 1 for Healer) : ";
    cin >> playerChoice;

    cout << "Select weapon ( 0 for Sword, 1 for Dagger) : ";
    cin >> weaponChoice;

    game.selectPlayer(playerChoice);

    armoredPlayer.selectWeapon(weaponChoice);
    healerPlayer.selectWeapon(weaponChoice);

    while(true) {
        game.playTurn();
        if(game.gameEnded)
            break;
        cout << "Press Enter to continue...\n";
        cin.ignore();
        cin.get();
    }

    return 0;
}

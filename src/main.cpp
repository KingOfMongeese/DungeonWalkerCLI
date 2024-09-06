#include <iostream>
#include "monsters.hpp"
#include "player.hpp"
#include "windows.h"
#include <cstdlib>
#include <time.h>

using namespace std;


int main()
{
    srand(time(0));
    Goblin gerald = Goblin("Gerald");
    Goblin henry = Goblin("Henry");
    Player player1 = Player("Player1");

    int cnt = 1;

    while (true) {

        if (gerald.dead && henry.dead) {
            break;
        }

        if (player1.dead) {
            break;
        }

        system("cls");
        gerald.display_health();
        henry.display_health();
        player1.display_health();

        cout << "\nCombat Round!" << endl;
        if ((cnt % 2 ) == 0 && ! gerald.dead) {
            gerald.take_damage(player1.attack(gerald.get_name()));
        }
        else if (! henry.dead) {
            henry.take_damage(player1.attack(henry.get_name()));
        }

        if (! gerald.dead) {
            player1.take_damage(gerald.attack(player1.get_name()));
        }
        
        if (! henry.dead) {
            player1.take_damage(henry.attack(player1.get_name()));
        }

        cout << "-------------------------------\n" << endl; 
        cnt++;
        Sleep(1000);

    }

    
}
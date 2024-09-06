#include "being.hpp"
#include "monsters.hpp"
#include <iostream>
#include <string>

using namespace std;

//Goblin
Goblin::Goblin(string g_name){
    set_health(30);
    set_level(1);
    set_name(g_name);
    set_damage_multiplier(2);
}

void Goblin::display_health() {

    cout << "Goblin: " << name << "'s health is " << health << endl;
    
}





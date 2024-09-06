#include "player.hpp"
#include "being.hpp"
#include <iostream>
#include <string>

using namespace std;

Player::Player(string player_name) {
    set_health(50);
    set_level(1);
    set_name(player_name);
    set_damage_multiplier(4);
}

void Player::display_health() {
    cout << name << " Health: " << health << endl;
}
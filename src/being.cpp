#include "being.hpp"
#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

//Being

Being::Being() = default;

void Being::set_damage_multiplier(int damage_mult) {
    damage_multiplier = damage_mult;
}

int Being::attack(string target) {

    int damage = (rand() % (damage_multiplier + 1) ) * level;
    cout << name << " ** " << target << ": " << damage << endl;
    return damage;
}

void Being::display_health() {
    cout << "Being health: " << health << endl;
}

void Being::set_health(int newHealth) {
    health = newHealth;
}

void Being::set_name(string new_name) {
    name = new_name;
}

void Being::take_damage(int damage) {
    health = health - damage;
    if (health <= 0) {
        dead = true;
        cout << name << " died!" << endl;
    }
}

void Being::set_level(int new_level) {
    level = new_level;
}

string Being::get_name() {
    return name;
}
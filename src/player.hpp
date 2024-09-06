#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "being.hpp"
#include <string>

using namespace std;

class Player: public Being {

    public:
        Player(string player_name);
        void display_health() override;
    
};

#endif


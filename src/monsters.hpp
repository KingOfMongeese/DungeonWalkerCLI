#ifndef MONSTERS_HPP
#define MONSTERS_HPP

#include <string>
#include "being.hpp"


class Goblin: public Being {

    public: 

        Goblin(std::string g_name);
        void display_health() override;
};

#endif
#ifndef BEING_HPP
#define BEING_HPP

#include <string>

class Being {

    public:

        int level;
        bool dead = false;

        Being();

        virtual ~Being() = default;
        virtual void display_health();

        int attack(std::string target);

        void take_damage(int damage);
        void set_health(int newHealth);
        void set_level(int new_level);
        void set_damage_multiplier(int damage_mult);
        void set_name(std::string new_name);
        std::string get_name();
    
    protected:
        std::string name;
        int health;
        int damage_multiplier;

};

#endif
#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "weapon.h"

class Player{
    private:
        std::string name;
        double health;
        Weapon* weapon;

    public:
        Player(const char*);
        void attack(Player* Player);
        std::string getName();
        void display();
        void displayPlayer();
        void WeaponEquip(Weapon*);

    private:
        void defence(double);

};


#endif
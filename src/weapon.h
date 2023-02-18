#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon{
    private:
    std::string name;
    double power;

    public:
    Weapon(const char*, double);
    double getPower();
    std::string getName();
};

#endif
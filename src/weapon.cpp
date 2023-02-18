#include "weapon.h"
#include <iostream>
#include <string>

Weapon::Weapon(const char* name, double power){
    this->name = name;
    this->power = power;
}

double Weapon::getPower(){
    return this->power;
}

std::string Weapon::getName(){
    return this->name;
}
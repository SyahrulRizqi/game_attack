#include "hero.h"
#include "weapon.h"
#include <iostream>
#include <string>

Player::Player(const char* name){
    this->name = name;
    this->health = 100;
}

void Player::displayPlayer(){
    std::cout << this->name << "\t\t" << this->weapon->getName() << std::endl;
}

void Player::display(){
    std::cout << "Name : " << this->name << std::endl;
    if (this->health <= 0){
        std::cout << "Health : 0" << std::endl; 
    }else{
    std::cout << "Health : " << this->health << std::endl;
}
    std::cout << "Weapon : " << this->weapon->getName() << std::endl;
    std::cout << "Damage : " << this->weapon->getPower() << std::endl;
}
void Player::attack(Player* Player){
    if (this->health <= 0){
        std::cout << "------ " << this->name << " Death -----" << std::endl;

    }else{
        std::cout << "\n" << this->name << " Attacking " << Player->getName();
        std::cout << " dengan " << this->weapon->getName() << std::endl;
        Player::defence(this->weapon->getPower());
    }
}

std::string Player::getName(){
    return this->name;
}

void Player::WeaponEquip(Weapon* weapon){
    this->weapon = weapon;
}

void Player::defence(double damage){
    this->health -= damage;
    std::cout << this->name << " menerima damage : " << damage << std::endl;

    if (this->health <= 0){
        std::cout << "----- " << this->name << " death ----" << std::endl;
    }
}
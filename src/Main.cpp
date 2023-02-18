#include <iostream>
#include <string>
#include <cstdlib>
#include "hero.h"
#include "weapon.h"

using namespace std;

int main(int argc, char const *argv[])
{
    char lnjt, fight;
    while(true){
    Player* hero = new Player("Syahrul");
    Weapon* weaponHero = new Weapon("Dagger", (1+ rand() % 200));

    hero->WeaponEquip(weaponHero);

    Player* enemy = new Player("Rizqi");
    Weapon* weaponEnemy = new Weapon("Tombak",  (1 + rand() % 200));

    enemy->WeaponEquip(weaponEnemy);
    system("cls");
    cout << " Name\t\t" << "Weapon  " << endl;
    cout << "----------|------------" << endl;
    hero->displayPlayer();
    enemy->displayPlayer();
    cout << "_______________________" << endl;
    cout << "\nFight ? [y/n]> ";
    cin >> fight;
    if ((fight == 'y') || (fight == 'Y')){
    hero->attack(enemy);
    enemy->attack(hero);
    cout << "\n\n";
    hero->display();
    cout << "\n";
    enemy->display();
    system("pause");
    }
    else if ((fight == 'n') || (fight == 'N')){
        break;
    }
}

    return 0;
}

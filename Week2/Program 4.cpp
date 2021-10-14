// Week2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Item {};

struct Weapon : Item
{
    enum class Type
    {
        NONE,
        SWORD,
        DAGGER,
        MACE,
        TWIN_SWORDS,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POTION,
        ICE_BLADE,
        SMALL_KNIFE
    };

    Type type = Type::NONE;

    // Constructor
    Weapon(Weapon::Type type)
    {
        this->type = type;
    }
};

struct Player
{
    int healthCurrent = 13000;
    int healthMax = 13000;

    Weapon weapon = Weapon(Weapon::Type::SAMURAI);
};


void Program4()
{
    Player player = Player();

    cout << "Player health: " << player.healthCurrent << endl;
    cout << "Player weapon: " << (int)player.weapon.type << endl;
}

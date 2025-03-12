#ifndef PROCESS_H_INCLUDED
#define PROCESS_H_INCLUDED

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using namespace std;

class Inventory;

class Cat {
    public:
        int damage;
        int affectionLevel;

        Cat (int dmg, int affection) {
            damage = dmg;
            affectionLevel = affection;
        }

        void feedCat(Inventory& drawer);
};

class Hooman {
    public:
        int health;
        string name;

        Hooman (int h, string n) {
            health = h;
            name = n;
    }
    void subtractHealth(Cat &kitty);
    void damagePlayer(Cat &kitty);
};

class Inventory {
    public:
        int catFoodSupply;

        Inventory (int cFS) {
            catFoodSupply = cFS;
        }

        void checkStore();
};

void gameOptions(Hooman &fritz, Cat &kitty, Inventory &drawer);

void appear();
void petCat();



#endif // PROCESS_H_INCLUDED

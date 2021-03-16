//
// Created by Yani Drenchev on 2021-03-16.
//
#include "Waepon.h"
#ifndef PRAKT3_WARRIOR_H
#define PRAKT3_WARRIOR_H

class Warrior{
private:
    double strenght;
    double health;
    char name[20];
    Weapon weapon;
public:
    Warrior(double strenght, double health,  char *name, Weapon &weapon1);
    double getStrenght() const;

    void setStrenght(double strenght);

    double getHealth() const;

    void setHealth(double health);

    const Weapon &getWeapon() const;

    void setWeapon(const Weapon &weapon);

    const char *getName() const;

    void setName(const char name[20]);

    void attac(Warrior &warrior);

    bool takeDamage (double dmg){
        if(health-dmg <= 0) {
            return false;
        }
        health = health-dmg;
        return true;
    }
};



#endif //PRAKT3_WARRIOR_H



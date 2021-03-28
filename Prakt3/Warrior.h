//
// Created by Yani Drenchev on 2021-03-16.
//
#pragma once
#include <iostream>
#include <cstring>
#include "Weapon.h"


class Warrior {

private:
    double strenght;
    double health;
    char name[20];
    Weapon weapon;

public:
    Warrior(double strenght, double health, char *name, Weapon &weapon1);

    double getStrenght() const;

    void setStrenght(double strenght);

    double getHealth() const;

    void setHealth(double health);

    const Weapon &getWeapon() const;

    void setWeapon(const Weapon &weapon);

    const char *getName() const;

    void setName(const char name[20]);

    void attack(Warrior &warrior);

    bool takeDamage(double dmg);
};

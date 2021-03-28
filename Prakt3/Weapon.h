//
// Created by Yani Drenchev on 2021-03-16.
//

#pragma once
#include <cstring>
class Weapon {


private:
    int numberOfAttacks;
    double strenght;
    char name[20];

public:
    Weapon();

    Weapon(int numberOfAttacks, double strenght, char *name);

    int getNumberOfAttacks() const;

    void setNumberOfAttacks(int numberOfAttacks);

    double getStrenght() const;

    void setStrenght(double strenght);

    const char *getName() const;
};


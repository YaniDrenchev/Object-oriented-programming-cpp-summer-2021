//
// Created by Yani Drenchev on 2021-03-28.
//
#include "Weapon.h"


void Weapon::setStrenght(double strenght) {
    this->strenght = strenght;
}

double Weapon::getStrenght() const {
    return strenght;
}

void Weapon::setNumberOfAttacks(int numberOfAttacs) {
    this->numberOfAttacks = numberOfAttacs;
}

int Weapon::getNumberOfAttacks() const {
    return numberOfAttacks;
}

Weapon::Weapon(int numberOfAttacs, double strenght, char *name) {
    this->numberOfAttacks = numberOfAttacs;
    this->strenght = strenght;
    strcpy(this->name, name);
}

Weapon::Weapon() {
}

const char *Weapon::getName() const {
    return name;
}

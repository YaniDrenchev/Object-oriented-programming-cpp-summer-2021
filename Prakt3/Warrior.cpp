//
// Created by Yani Drenchev on 2021-03-28.
//
#include "Warrior.h"

Warrior::Warrior(double strenght, double health, char *name, Weapon &weapon1) {
    this->strenght = strenght;
    this->health = health;
    this->weapon = weapon1;
    strcpy(this->name, name);
}

double Warrior::getStrenght() const {
    return strenght;
}

void Warrior::setStrenght(double strenght) {
    this->strenght = strenght;
}

double Warrior::getHealth() const {
    return health;
}

void Warrior::setHealth(double health) {
    this->health = health;
}

const Weapon &Warrior::getWeapon() const {
    return this->weapon;
}

void Warrior::setWeapon(const Weapon &weapon) {
    this->weapon = weapon;
}

void Warrior::attack(Warrior &warrior) {
    double firstStrenght;
    if (weapon.getNumberOfAttacks() != 0) {
        firstStrenght = this->weapon.getStrenght() + strenght;
    } else {
        firstStrenght = strenght;
    }

    if (warrior.takeDamage(firstStrenght)) {
        weapon.setNumberOfAttacks(weapon.getNumberOfAttacks() - 1);

        std::cout << "Player: " << this->name << " attacked " << warrior.name << " and made: " << firstStrenght
                  << " dmg \n";

        std::cout << "Player: " << warrior.getName() << " has " << warrior.getHealth() << " health \n";
    } else {
        std::cout << "Player: " << warrior.getName() << " took fatal damage and is now dead GAME OVER \n";
    }

}

const char *Warrior::getName() const {
    return name;
}

void Warrior::setName(const char name[20]) {
    strcpy(this->name, name);
}

bool Warrior::takeDamage(double dmg) {
    if (health - dmg <= 0) {
        return false;
    }
    health = health - dmg;
    return true;
}
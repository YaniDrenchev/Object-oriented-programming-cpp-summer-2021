#include <iostream>
#include "Warrior.h"
#include "Waepon.h"


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

void Warrior::attac(Warrior &warrior) {
    double firstStrenght;
    if (weapon.getNumberOfAttacs() != 0) {
        firstStrenght = this->weapon.getStrenght() + strenght;
    } else {
        firstStrenght = strenght;
    }

    if (warrior.takeDamage(firstStrenght)) {
        weapon.setNumberOfAttacs(weapon.getNumberOfAttacs() - 1);

        std::cout << "Player: " << this->name << " attacted " << warrior.name << " and made: " << firstStrenght << " dmg \n";

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

void Weapon::setStrenght(double strenght) {
    this->strenght = strenght;
}

double Weapon::getStrenght() const {
    return strenght;
}

void Weapon::setNumberOfAttacs(int numberOfAttacs) {
    this->numberOfAttacs = numberOfAttacs;
}

int Weapon::getNumberOfAttacs() const {
    return numberOfAttacs;
}

Weapon::Weapon(int numberOfAttacs, double strenght, const char name[]) {
    this->numberOfAttacs = numberOfAttacs;
    this->strenght = strenght;
    strcpy(this->name, name);
}

Weapon::Weapon() {
}

const char *Weapon::getName() const {
    return name;
}


int main() {
    Weapon *weapon1 = new Weapon(10, 40.00, "Bradwa");
    Warrior *warrior1 = new Warrior(30.00, 100.00, "Gosho", *weapon1);
    Weapon *weapon2 = new Weapon(10, 40.00, "Bradwa");
    Warrior warrior2(30.00, 100.00, "Igrach", *weapon2);

    warrior1->attac(warrior2);
    warrior1->attac(warrior2);
    return 0;
}
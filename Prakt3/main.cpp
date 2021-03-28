#include "Warrior.h"
#include "Weapon.h"

int main() {
    Weapon weapon1(10, 40.00, const_cast<char *>("Bradwa"));
    Warrior warrior1(30.00, 100.00, const_cast<char *>("Gosho"), weapon1);
    Weapon weapon2(10, 40.00, const_cast<char *>("Bradwa"));
    Warrior warrior2(30.00, 100.00, const_cast<char *>("Igrach"), weapon2);

    warrior1.attack(warrior2);
    warrior1.attack(warrior2);

    return 0;
}
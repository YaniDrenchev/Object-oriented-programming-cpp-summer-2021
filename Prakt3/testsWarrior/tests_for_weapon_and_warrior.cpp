//
// Created by Yani Drenchev on 2021-03-23.
//
#define CATCH_CONFIG_MAIN
#include "../single_include/catch2/catch.hpp"
#include "../Weapon.cpp"
#include "../Warrior.cpp"

//USELESS TESTS :)
TEST_CASE("Weapon attacks Getter", "[getAttacks]"){
    Weapon test1(10, 100, const_cast<char *>("Bradwa"));
    REQUIRE(test1.getNumberOfAttacks() == 10);
}

TEST_CASE("Weapon attacks Setter", "[setAttacks]"){
    Weapon test1(10, 100, const_cast<char *>("Bradwa"));
    test1.setNumberOfAttacks(20);
    REQUIRE(test1.getNumberOfAttacks() == 20);
}

TEST_CASE("Weapon strenght getter", "[getStrenght]"){
    Weapon test1(10, 100, const_cast<char *>("Bradwa"));
    REQUIRE(test1.getStrenght() == 100);
}

TEST_CASE("Weapon  strenght setter", "[setStrenght]"){
    Weapon test1(10, 100, const_cast<char *>("Bradwa"));
    test1.setStrenght(200);
    REQUIRE(test1.getStrenght() == 200);
}
//Warrrior testsWarrior


TEST_CASE("Warrior take damage", "[takeDamage]"){
    Weapon test1(10, 100, const_cast<char *>("Bradwa"));
    Warrior warrior1(30.00, 100.00, const_cast<char *>("Gosho"), test1);
    warrior1.takeDamage(20);
    REQUIRE(warrior1.getHealth()==80);
}

TEST_CASE("Warrior take fatal damage", "[takeDamage]"){
    Weapon test1(10, 100, const_cast<char *>("Bradwa"));
    Warrior warrior1(30.00, 100.00, const_cast<char *>("Gosho"), test1);

    REQUIRE(!warrior1.takeDamage(150));
}
TEST_CASE("Warrior attack", "[attack]"){
    Weapon weapon1(10, 40.00, const_cast<char *>("Bradwa"));
    Warrior warrior1(30.00, 100.00, const_cast<char *>("Gosho"), weapon1);
    Weapon weapon2(10, 40.00, const_cast<char *>("Bradwa"));
    Warrior warrior2(30.00, 100.00, const_cast<char *>("Igrach"), weapon2);
    warrior1.attack(warrior2);
    REQUIRE(warrior2.getHealth()==30);
}

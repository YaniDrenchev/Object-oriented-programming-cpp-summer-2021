//
// Created by Yani Drenchev on 2021-03-17.
//
#include <iostream>
#include <vector>
#include "Human.h"
#include "Auto.h"
#include "AutoHause.h"

int Human::getEgn() const {
    return egn;
}

void Human::setEgn(int egn) {
    this->egn = egn;
}

int Human::getYearsExp() const {
    return yearsExp;
}

void Human::setYearsExp(int yearsExp) {
    this->yearsExp = yearsExp;
}

int Human::getSoldAutos() const {
    return soldAutos;
}

void Human::setSoldAutos(int soldAutos) {
    this->soldAutos = soldAutos;
}

const char *Human::getName() const {
    return name;
}

bool Human::operator==(const Human &h1) {
    return Human::getEgn() == h1.getEgn();
}

void Human::print() {
    std::cout << "Name: " << name << " EGN " << egn << " SoldAutos: " << soldAutos << " Years of EXP: " << yearsExp
              << "\n";
}

Human::Human(int yearsExp, int soldAutos, int egn, char *name) {
    this->yearsExp = yearsExp;
    this->soldAutos = soldAutos;
    this->egn = egn;
    strcpy(this->name, name);
}

Human::Human() {

}


Auto::Auto(int year, double price, int autoId, int probeg, char *model, char *brand, Human managerOfAuto) {
    this->year = year;
    this->autoId = autoId;
    this->price = price;
    this->probeg = probeg;
    strcpy(this->model, model);
    strcpy(this->brand, brand);
    this->managerOfTheAuto = managerOfAuto;
}

int Auto::getYear() const {
    return year;
}

int Auto::getAutoId() const {
    return autoId;
}

void Auto::setAutoId(int autoId) {
    this->autoId = autoId;
}

void Auto::setYear(int year) {
    Auto::year = year;
}

double Auto::getPrice() const {
    return price;
}

void Auto::setPrice(double price) {
    Auto::price = price;
}

int Auto::getProbeg() const {
    return probeg;
}

void Auto::setProbeg(int probeg) {
    Auto::probeg = probeg;
}

const char *Auto::getModel() const {
    return model;
}

const char *Auto::getBrand() const {
    return brand;
}

Human Auto::getManagerOfTheAuto() {
    return managerOfTheAuto;
}

void Auto::setManagerOfTheAuto(const Human &managerOfTheAuto) {
    Auto::managerOfTheAuto = managerOfTheAuto;
}

bool Auto::operator==(const Auto &a1) {
    return Auto::autoId == a1.getAutoId();
}

void Auto::print() {
    std::cout << "Model: " << model << " Brand: " << brand << " Year: " << year << " Manager: "
              << managerOfTheAuto.getName() << "\n";
}

void AutoHause::printAutos() {
    if (autos.empty()) {
        std::cout << "NO CARS";
    }
    std::cout << "\n AUTOHAUSE LIST OF AUTOS: <<<<< " << name << " >>>>>> \n";
    for (auto &el : autos) {
        el.print();
    }
}

void AutoHause::printEmplyees() {
    if (employees.empty()) {
        std::cout << "NO EMPLOYESS";
        return;
    }
    std::cout << "\n AUTOHAUSE LIST OF EMPLOYEES: <<<<< " << name << " >>>>>> \n";
    for (auto &employee : employees) {
        employee.print();
    }
}

void AutoHause::addAuto(const Auto autoToBeAdded) {
    autos.push_back(autoToBeAdded);
}

void AutoHause::sellAuto(Auto autoToBeSold) {

    for (int i = 0; i < autos.size(); ++i) {
        if (autoToBeSold == autos[i]) {
            autos.erase(autos.begin() + i);
            break;
        }
    }
    std::cout << "An auto was sold by: " << autoToBeSold.getManagerOfTheAuto().getName() << " The auto is: "
              << autoToBeSold.getModel() << "\n";
    int soldAutos = autoToBeSold.getManagerOfTheAuto().getSoldAutos();
    autoToBeSold.getManagerOfTheAuto().setSoldAutos(10);

}

void AutoHause::addNewEmployee(Human newEmployee) {
    employees.push_back(newEmployee);
}

void AutoHause::removeEmployee(Human employeeToBeRemoved) {
    for (int i = 0; i < employees.size(); ++i) {
        if (employeeToBeRemoved == employees[i]) {
            employees.erase(employees.begin() + i);
        }
    }
    std::cout << "Employee: " << employeeToBeRemoved.getName() << " was removed \n";
}

void AutoHause::changeOwner(Human newOwner) {
    owner = newOwner;
}

void AutoHause::printOwner() {
    std::cout << "The owner is: " << owner.getName() << "\n";
}

void AutoHause::sortEmployeesByYears() {
    int min_index;
    for (int i = 0; i < employees.size() - 1; ++i) {
        min_index = i;
        for (int j = i + 1; j < employees.size(); ++j) {
            if (employees[min_index].getYearsExp() > employees[j].getYearsExp()) {
                min_index = j;
            }
        }
        Human temp = employees[min_index];
        employees[min_index] = employees[i];
        employees[i] = temp;
    }
}

void AutoHause::sortEmployeesBySells() {
    int min_index;
    for (int i = 0; i < employees.size() - 1; ++i) {
        min_index = i;
        for (int j = i + 1; j < employees.size(); ++j) {
            if (employees[min_index].getSoldAutos() > employees[j].getSoldAutos()) {
                min_index = j;
            }
        }
        Human temp = employees[min_index];
        employees[min_index] = employees[i];
        employees[i] = temp;
    }
}

void AutoHause::sortAutosByYear() {
    int min_index;
    for (int i = 0; i < autos.size() - 1; ++i) {
        min_index = i;
        for (int j = i + 1; j < autos.size(); ++j) {
            if (autos[min_index].getYear() > autos[j].getYear()) {
                min_index = j;
            }
        }
        Auto temp = autos[min_index];
        autos[min_index] = autos[i];
        autos[i] = temp;
    }
}

void AutoHause::sortAutosByProbeg() {
    int min_index;
    for (int i = 0; i < autos.size() - 1; ++i) {
        min_index = i;
        for (int j = i + 1; j < autos.size(); ++j) {
            if (autos[min_index].getProbeg() > autos[j].getProbeg()) {
                min_index = j;
            }
        }
        Auto temp = autos[min_index];
        autos[min_index] = autos[i];
        autos[i] = temp;
    }
}

AutoHause::AutoHause(const Human &owner, char *name) {
    this->owner = owner;
    strcpy(this->name, name);
}


int main() {
    Human gosho(10, 2, 1234445, const_cast<char *>("Gosho"));
    Human ivan(9, 1, 12234445, const_cast<char *>("ivan"));
    Human pesho(2, 0, 120445, const_cast<char *>("Pesho"));
    Human test(1, 0, 2323, const_cast<char *>("test"));
    Auto test1(2020, 2999, 1, 1200, const_cast<char *>("Test"), const_cast<char *>("Test"), pesho);
    Auto astra(1999, 2999, 1, 1200, const_cast<char *>("Astra"), const_cast<char *>("Opel"), pesho);
    Auto punto(1999, 2000, 2, 10200, const_cast<char *>("Punto"), const_cast<char *>("Fiat"), ivan);
    Auto panamera(2019, 199999, 3, 100, const_cast<char *>("Paranema"), const_cast<char *>("Porche"), gosho);
    AutoHause qkikoli(gosho, const_cast<char *>("QKIKOLI"));


//    test adding autos
    qkikoli.addAuto(test1);
    qkikoli.addAuto(astra);
    qkikoli.addAuto(punto);
    qkikoli.addAuto(panamera);


//test adding
    qkikoli.addNewEmployee(gosho);
    qkikoli.addNewEmployee(ivan);
    qkikoli.addNewEmployee(pesho);
    qkikoli.addNewEmployee(test);
//printing owner
    qkikoli.printOwner();
//    changing owner
    qkikoli.changeOwner(ivan);
//    printing owner
    qkikoli.printOwner();
//printing autos and employees
    qkikoli.printAutos();
    qkikoli.printEmplyees();
//selling autos and removing employees
    qkikoli.sellAuto(panamera);
    qkikoli.removeEmployee(gosho);
//    testing
    qkikoli.printEmplyees();
    qkikoli.printAutos();
    astra.getManagerOfTheAuto().print();
//    testing sorting
    qkikoli.sortEmployeesByYears();
    qkikoli.sortEmployeesBySells();
    qkikoli.printEmplyees();
    qkikoli.sortAutosByYear();
    qkikoli.printAutos();
    qkikoli.sortAutosByProbeg();
    qkikoli.printAutos();
}
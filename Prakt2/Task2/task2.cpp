//
// Created by Yani Drenchev on 2021-03-17.
//
#include <iostream>
#include <vector>

class Human {
private:

    int yearsExp;
    int soldAutos;
    int egn;
    char name[20];

public:
    int getEgn() const {
        return egn;
    }

    void setEgn(int egn) {
        Human::egn = egn;
    }

    int getYearsExp() const {
        return yearsExp;
    }

    void setYearsExp(int yearsExp) {
        Human::yearsExp = yearsExp;
    }

    int getSoldAutos() const {
        return soldAutos;
    }

    void setSoldAutos(int soldAutos) {
        this->soldAutos = soldAutos;
    }

    const char *getName() const {
        return name;
    }

    bool operator==(const Human &h1) {
        return Human::getEgn() == h1.getEgn();
    }

    void print() {
        std::cout << "Name: " << name << " EGN " << egn << " SoldAutos: " << soldAutos << "\n";
    }

    Human(int yearsExp, int soldAutos, int egn, char *name) {
        this->yearsExp = yearsExp;
        this->soldAutos = soldAutos;
        this->egn = egn;
        strcpy(this->name, name);
    }

    Human() {

    }

};

class Auto {

private:
    int year;
    int autoId;
    double price;
    int probeg;
    char model[20];
    char brand[20];
    Human managerOfTheAuto;

public:
    Auto(int year, double price, int autoId, int probeg, char *model, char *brand, Human managerOfAuto) {
        this->year = year;
        this->autoId = autoId;
        this->price = price;
        this->probeg = probeg;
        strcpy(this->model, model);
        strcpy(this->brand, brand);
        this->managerOfTheAuto = managerOfAuto;
    }

    int getYear() const {
        return year;
    }

    int getAutoId() const {
        return autoId;
    };

    void setAutoId(int autoId) {
        this->autoId = autoId;
    };

    void setYear(int year) {
        Auto::year = year;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        Auto::price = price;
    }

    int getProbeg() const {
        return probeg;
    }

    void setProbeg(int probeg) {
        Auto::probeg = probeg;
    }

    const char *getModel() const {
        return model;
    }

    const char *getBrand() const {
        return brand;
    }

    Human getManagerOfTheAuto() {
        return managerOfTheAuto;
    }

    void setManagerOfTheAuto(const Human &managerOfTheAuto) {
        Auto::managerOfTheAuto = managerOfTheAuto;
    }

    bool operator==(const Auto &a1) {
        return Auto::autoId == a1.getAutoId();
    }

    void print() {
        std::cout << "Model: " << model << " Brand: " << brand << " Year: " << year << " Manager: "
                  << managerOfTheAuto.getName() << "\n";
    }
};

class AutoHause {
private:
    char name[20];
    Human owner;
    std::vector<Human> employees;
    std::vector<Auto> autos;
public:
    void printAutos() {
        if (autos.empty()) {
            std::cout << "NO CARS";
        }
        std::cout << "\n AUTOHAUSE LIST OF AUTOS: <<<<< " << name << " >>>>>> \n";
        for (auto &el : autos) {
            el.print();
        }
    }

    void printEmplyees() {
        if (employees.empty()) {
            std::cout << "NO EMPLOYESS";
            return;
        }
        std::cout << "\n AUTOHAUSE LIST OF EMPLOYEES: <<<<< " << name << " >>>>>> \n";
        for (auto &employee : employees) {
            employee.print();
        }
    }

    void addAuto(const Auto autoToBeAdded) {
        autos.push_back(autoToBeAdded);
    }

    void sellAuto(Auto autoToBeSold) {
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

    void addNewEmployee(Human newEmployee) {
        employees.push_back(newEmployee);
    }

    void removeEmployee(Human employeeToBeRemoved) {
        for (int i = 0; i < employees.size(); ++i) {
            if (employeeToBeRemoved == employees[i]) {
                employees.erase(employees.begin() + i);
            }
        }
        std::cout << "Employee: " << employeeToBeRemoved.getName() << " was removed \n";
    }

    void changeOwner(Human newOwner) {
        owner = newOwner;

    }

    void printOwner() {
        std::cout << "The owner is: " << owner.getName() << "\n";
    }


    AutoHause(const Human &owner, char *name) {
        this->owner = owner;
        strcpy(this->name, name);
    }
};


int main() {
    Human gosho(10, 2, 1234445, const_cast<char *>("Gosho"));
    Human ivan(9, 1, 12234445, const_cast<char *>("ivan"));
    Human pesho(2, 0, 120445, const_cast<char *>("Pesho"));
    Auto astra(1999, 2999, 1, 1200, const_cast<char *>("Astra"), const_cast<char *>("Opel"), pesho);
    Auto punto(1999, 2000, 2, 10200, const_cast<char *>("Punto"), const_cast<char *>("Fiat"), ivan);
    Auto panamera(2019, 199999, 3, 100, const_cast<char *>("Paranema"), const_cast<char *>("Porche"), gosho);
    AutoHause qkikoli(gosho, const_cast<char *>("QKIKOLI"));

//    test adding autos
    qkikoli.addAuto(astra);
    qkikoli.addAuto(punto);
    qkikoli.addAuto(panamera);

//test adding
    qkikoli.addNewEmployee(gosho);
    qkikoli.addNewEmployee(ivan);
    qkikoli.addNewEmployee(pesho);
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
    qkikoli.sellAuto(astra);
//    testing
    qkikoli.printEmplyees();
    qkikoli.printAutos();
    astra.getManagerOfTheAuto().print();

}
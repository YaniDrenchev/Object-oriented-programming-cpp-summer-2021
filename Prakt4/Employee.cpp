//
// Created by Yani Drenchev on 2021-03-30.
//

#include "Employee.h"

int Employee::getId() const {
    return id;
}

int Employee::getAge() const {
    return age;
}

void Employee::setAge(int age) {
    this->age = age;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double salary) {
    this->salary = salary;
}

const char *Employee::getName() const {
    return name;
}

const char *Employee::getDepartment() const {
    return department;
}

Employee::Employee(int age, int id, double salary, const char *name, const char *department) {
    this->id = id;
    this->age = age;
    this->salary = salary;
    if (strlen(name) > 50){
        std::cout << "too long Name";
    }
    if (strlen(department) > 50){
        std::cout << "too long department";
    }
    strcpy(this->name, name);
    strcpy(this->department, department);
}

void Employee::print() {
    std::cout<< "Printing Employee with ID: " << id << "\n";
    std::cout<< "Employee name: " << name << "\n";
    std::cout<< "Employee department: " << department << "\n";
    std::cout<< "Employee age: " << age << "\n";
    std::cout<< "Employee salary: " << salary << "\n";
}

bool Employee::operator==(const Employee &employee) const {
    return this->id == employee.getId();
}



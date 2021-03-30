//
// Created by Yani Drenchev on 2021-03-30.
//

#include "Employee.h"

int Employee::getId() const {
    return id;
}

void Employee::setId(int id) {
    Employee::id = id;
}

int Employee::getAge() const {
    return age;
}

void Employee::setAge(int age) {
    Employee::age = age;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double salary) {
    Employee::salary = salary;
}

const char *Employee::getName() const {
    return name;
}

const char *Employee::getDepartment() const {
    return department;
}

Employee::Employee(int age, double salary, char *name, char *department) {
    Employee::age = age;
    Employee::salary = salary;
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

bool Employee::operator==(const Employee &employee) {
    return Employee::id == employee.getId();
}



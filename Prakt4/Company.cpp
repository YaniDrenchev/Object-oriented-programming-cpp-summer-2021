//
// Created by Yani Drenchev on 2021-03-30.
//

#include "Company.h"

Company::Company(size_t capacity) {
    assert(capacity < 1000);
    employees = new Employee *[capacity];
    for (int i = 0; i < capacity; ++i) {
        employees[i] = nullptr;
    }
}

bool Company::hireEmployee(Employee *employee) {
    bool added = false;
    for (int i = 0; i < 1000; ++i) {
        if (employees[i] == nullptr){
            employees[i] = employee;
            added = true;
            numberOfEmployees ++;
            currSize ++;
            break;
        }
    }
    return added;
}

bool Company::getSacked(const int id)  {
    for (int i = 0; i < currSize; ++i) {
        if (employees[i]->getId() == id) {
            employees[i] = nullptr;
            numberOfEmployees --;
            return true;
        }
    }
    return false;
}

bool Company::isCompanyEmpty() const {
    return numberOfEmployees == 0;
}

//std::vector<Employee> Company::sortEmployeesByName() {
//
//    return std::vector<Employee>();
//}

double Company::calculateSalary() {
    double sum = 0;
    for (int i = 0; i < currSize; ++i) {
        if (employees[i] != nullptr){
            sum += employees[i]->getSalary();
        }
    }
    return sum;
}

bool Company::raiseSalaryWithPercent(const int percent, Employee &employee) {
    bool exists = false;
    for (int i = 0; i < currSize; i++) {
        if(*employees[i] == employee){
            exists = true;
            double salary =  employees[i]->getSalary();
            employees[i]->setSalary(salary + salary * (percent/100));
        }
    }
    return exists;
}

void Company::printCompany() {
    std::cout <<"Printing company:" << "\n";
    std::cout <<"Company has: " << numberOfEmployees << " Employees" << "\n";
    std::cout <<"Printing companies Employees: " << "\n";
    for (int i = 0; i < currSize; i++) {
        employees[i]->print();
    }
}

void Company::printEmployeesFromDepartment(const char *name) {

    std::cout<<"Printing employees from department: " << name << "\n";

    for (int i = 0; i < currSize; i++) {
        if (employees[i]->getDepartment() == name){
            employees[i]->print();
        }
    }
}

double Company::calculateSalaryFromDepartment(const char *name) {
    double sum = 0;

    for (int i = 0; i < currSize; i++) {
        if(employees[i]->getDepartment() == name){
            sum+=  employees[i]->getSalary();
        }

    }
    return sum;
}

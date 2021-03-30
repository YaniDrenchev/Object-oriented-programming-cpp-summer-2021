//
// Created by Yani Drenchev on 2021-03-30.
//

#include "Company.h"

Company::Company() {

}

bool Company::hireEmployee(Employee employee) {
    if(employees.size() == maxSize){
        return false;
    }
    bool exists = false;
    for (auto &i : employees) {
        if (i == employee) {
            exists = true;
        }
    }
    if (!exists) {
        employees.push_back(employee);
        return true;
    } else {
        return false;
    }
}

bool Company::getSacked(const Employee employee) {
    for (int i = 0; i < employees.size(); ++i) {
        if (employees[i] == employee) {
            employees.erase(employees.begin() + i);
            return true;
        }
    }

    return false;
}

bool Company::isCompanyEmpty() {
    return employees.empty();
}

std::vector<Employee> Company::sortEmployeesByName() {
    return std::vector<Employee>();
}

double Company::calculateSalary() {
    double sum = 0;

    for (auto &employee : employees) {
        sum+= employee.getSalary();
    }

    return sum;
}

bool Company::raiseSalaryWithPercent(int percent, Employee &employee) {
    bool exists = false;
    for (auto &i : employees) {
        if(employee == i){
            exists = true;
            double salary = i.getSalary();
            i.setSalary(salary + salary * (percent/100));
        }
    }
    return exists;
}

void Company::printCompany() {
    std::cout <<"Printing company:" << "\n";
    std::cout <<"Company has: " << employees.size() << " Employees" << "\n";
    std::cout <<"Printing companies Employees: " << "\n";
    for (auto &employee : employees) {
        employee.print();
    }
}

void Company::printEmployeesFromDepartment(char *name) {

    std::cout<<"Printing employees from department: " << name << "\n";

    for (auto &employee : employees) {
        if (employee.getDepartment() == name){
            employee.print();
        }
    }
}

double Company::calculateSalaryFromDepartment(char *name) {
    double sum = 0;

    for (auto &employee : employees) {
        if(employee.getDepartment() == name){
            sum+= employee.getSalary();
        }

    }
    return sum;
}

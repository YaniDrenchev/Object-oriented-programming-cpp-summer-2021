//
// Created by Yani Drenchev on 2021-03-30.
//
#include <iostream>
#include <vector>
#include "Employee.h"

#ifndef PRAKT4_COMPANY_H
#define PRAKT4_COMPANY_H
class Company{
private:
    int maxSize = 1000;
    std::vector<Employee> employees;

public:
    Company();
    bool hireEmployee(Employee employee);
    bool getSacked(Employee employee);
    bool isCompanyEmpty();
    std::vector<Employee> sortEmployeesByName();
    double calculateSalary();
    bool raiseSalaryWithPercent(int percent, Employee &employee);
    void printCompany();
    void printEmployeesFromDepartment(char* name);
    double calculateSalaryFromDepartment(char* name);
};
#endif //PRAKT4_COMPANY_H

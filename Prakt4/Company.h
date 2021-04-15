//
// Created by Yani Drenchev on 2021-03-30.
//
#include <iostream>
#include <vector>
#include "Employee.h"

#ifndef PRAKT4_COMPANY_H
#define PRAKT4_COMPANY_H

class Company {
private:
    Employee **employees;
    size_t currSize =0;
    size_t numberOfEmployees = 0;
public:
    Company(std::size_t capacity);

    bool hireEmployee(Employee *employee);

    bool getSacked(const int id);

    bool isCompanyEmpty() const;

    Employee *sortEmployeesByName();

    double calculateSalary() ;

    bool raiseSalaryWithPercent(const int percent, Employee &employee);

    void printEmployeesFromDepartment(const char *name);

    double calculateSalaryFromDepartment(const char *name);

    void printCompany();
};

#endif //PRAKT4_COMPANY_H

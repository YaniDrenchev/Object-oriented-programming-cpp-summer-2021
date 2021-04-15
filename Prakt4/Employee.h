//
// Created by Yani Drenchev on 2021-03-30.
//
#include <iostream>
#ifndef PRAKT4_EMPLOYEE_H
#define PRAKT4_EMPLOYEE_H

class Employee {
private:
    int id;
    int age;
    double salary;
    char name[50];
    char department[50];

public:
    int getId() const;

    int getAge() const;

    void setAge(int age);

    double getSalary() const;

    void setSalary(double salary);

    const char *getName() const;

    const char *getDepartment() const;

    Employee(int age,int id, double salary, const char *name,const char *department);

    void print();

    bool operator == (const Employee &employee) const;
};

#endif //PRAKT4_EMPLOYEE_H

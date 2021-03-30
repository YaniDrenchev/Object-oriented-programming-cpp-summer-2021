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

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    double getSalary() const;

    void setSalary(double salary);

    const char *getName() const;

    const char *getDepartment() const;

    Employee(int age, double salary, char *name, char *department);

    void print();

    bool operator == (const Employee &employee);
};

#endif //PRAKT4_EMPLOYEE_H

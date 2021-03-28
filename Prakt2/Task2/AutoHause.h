//
// Created by Yani Drenchev on 2021-03-28.
//

#ifndef PRAKT2_AUTOHAUSE_H
#define PRAKT2_AUTOHAUSE_H


class AutoHause {
private:
    char name[20];
    Human owner;
    std::vector<Human> employees;
    std::vector<Auto> autos;
public:
    void printAutos();

    void printEmplyees();

    void addAuto(Auto autoToBeAdded);

    void sellAuto(Auto autoToBeSold);

    void addNewEmployee(Human newEmployee);

    void removeEmployee(Human employeeToBeRemoved);

    void changeOwner(Human newOwner);

    void printOwner();

    void sortEmployeesByYears();

    void sortEmployeesBySells();

    void sortAutosByYear();

    void sortAutosByProbeg();

    AutoHause(const Human &owner, char *name);
};



#endif //PRAKT2_AUTOHAUSE_H

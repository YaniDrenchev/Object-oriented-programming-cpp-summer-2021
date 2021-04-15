#include <iostream>

#include "Company.h"
int main() {
    Employee e{10, 1, 1000, "test2", "Innovation"};
    Employee e2{10,2, 1000, "Test", "Marketing"};
    Company c{20};
    c.hireEmployee(&e);
    c.hireEmployee(&e2);
    c.printCompany();
    return 0;
}
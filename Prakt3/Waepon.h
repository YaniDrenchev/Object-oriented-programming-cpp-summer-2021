//
// Created by Yani Drenchev on 2021-03-16.
//

#ifndef PRAKT3_WAEPON_H
#define PRAKT3_WAEPON_H

class Weapon {


private:
    int numberOfAttacs;
    double strenght;
    char name[20];
public:
    Weapon();

    Weapon(int numberOfAttacs, double strenght, const char name[]);

    int getNumberOfAttacs() const;

    void setNumberOfAttacs(int numberOfAttacs);

    double getStrenght() const;

    void setStrenght(double strenght);

    const char *getName() const;
};



#endif //PRAKT3_WAEPON_H

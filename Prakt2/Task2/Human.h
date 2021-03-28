//
// Created by Yani Drenchev on 2021-03-28.
//

#ifndef PRAKT2_HUMAN_H
#define PRAKT2_HUMAN_H

class Human {
private:

    int yearsExp;
    int soldAutos;
    int egn;
    char name[20];

public:
    int getEgn() const;

    void setEgn(int egn);

    int getYearsExp() const;

    void setYearsExp(int yearsExp);

    int getSoldAutos() const;

    void setSoldAutos(int soldAutos);

    const char *getName() const;

    bool operator==(const Human &h1);

    void print();

    Human(int yearsExp, int soldAutos, int egn, char *name);

    Human();

};


#endif //PRAKT2_HUMAN_H

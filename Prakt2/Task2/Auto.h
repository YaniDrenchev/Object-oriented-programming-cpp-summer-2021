//
// Created by Yani Drenchev on 2021-03-28.
//

#ifndef PRAKT2_AUTO_H
#define PRAKT2_AUTO_H

class Auto {

private:
    int year;
    int autoId;
    double price;
    int probeg;
    char model[20];
    char brand[20];
    Human managerOfTheAuto;

public:
    Auto(int year, double price, int autoId, int probeg, char *model, char *brand, Human managerOfAuto);

    int getYear() const;

    int getAutoId() const;

    void setAutoId(int autoId);

    void setYear(int year);

    double getPrice() const;

    void setPrice(double price);

    int getProbeg() const;

    void setProbeg(int probeg);

    const char *getModel() const;

    const char *getBrand() const;

    Human getManagerOfTheAuto();

    void setManagerOfTheAuto(const Human &managerOfTheAuto);

    bool operator==(const Auto &a1);

    void print();
};


#endif //PRAKT2_AUTO_H

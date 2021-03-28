//
// Created by Yani Drenchev on 2021-03-17.
//

#ifndef PRAKT2_PERSON_H
#define PRAKT2_PERSON_H

class Person {

private:
    int age;
    double height;
    double weight;
    char name[20];

public:
    Person(int age, double height, double weight, const char *name);

    void printPerson();

    void setAge(int age);

    int getAge() const;

    void setHeight(double height);

    double getHeight() const;

    double getWeight() const;

    void setWeight(double weight);

    const char *getName() const;

    double getWeightIndex() const;

    Person();

   ~Person();
};
#endif //PRAKT2_PERSON_H

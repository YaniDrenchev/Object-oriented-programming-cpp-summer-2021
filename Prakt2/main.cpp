#include <iostream>

#include "Person.h"

void Person::setAge(int const age) {
    this->age = age;
}

int Person::getAge() const {
    return age;
}

void Person::setHeight(double const height) {
    this->height = height;
}

double Person::getHeight() const {
    return height;
}

double Person::getWeight() const {
    return weight;
}

void Person::setWeight(double weight) {
    this->weight = weight;
}

const char *Person::getName() const {
    return name;
}

void Person::printPerson() {
    std::cout << "Person: " << name << " age: " << age << " height: " << height << " weight: " << weight << "\n";
}

Person::Person(int age, double height, double weight, const char *name) {
    this->age = age;
    this->height = height;
    this->weight = weight;
    strcpy(this->name, name);
}

Person::~Person() {
//    delete pointers and so on. But i don't have for now ..
}

double Person::getWeightIndex() {
    return weight / (height * height);
}

void swap (Person *person1, Person *person2){
    Person *temp = person1;
    person1 = person2;
    person2 = person1;
    delete(temp);
}

Person* sort(Person *persons[], int size){
    for (size_t i = 0; i < size-1; ++i) {
        for (int j = 0; j < size-1; ++j) {
            if(persons[j]->getWeightIndex() > persons[j+1]->getWeightIndex()){
                swap(persons[i], persons[i+1]);
            }
        }

    }
    return persons[1];
}


int main() {
    Person *person1 = new Person(10, 1.60, 56.00, "Ivan");
    Person *person2 = new Person(10, 1.70, 56.00, "Dragan");
    Person *person3 = new Person(10, 1.20, 56.00, "Pesho");
    Person *person4 = new Person(10, 1.80, 56.00, "Gosho");
    Person *person5 = new Person(10, 1.10, 56.00, "Sasho");
    Person *p[10];
    p[0] = person1;
    p[1] = person2;
    p[2] = person3;
    p[3] = person4;
    p[4] = person5;
    std::cout<<"BEFORE";
    for (int i = 0; i < 5; ++i) {
        p[i]->printPerson();
    }

    sort(p, 5);
    std::cout<<"AFTER";
    for (int i = 0; i < 5; ++i) {
        p[i]->printPerson();
    }
    std::cout << "Hello, World!" << std::endl;
    for (int j = 0; j < 10; ++j) {
        delete p[j];
    }
// pointer being freed was not allocated ... i don't know what is happening here can you give feedback?
    return 0;
}
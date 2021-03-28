#include <iostream>
#include <vector>
#include "Person.h"

void print(std::vector<Person> vector);

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
    std::cout << "Person: " << name << " age: " << age << " height: " << height << " weight: " << weight << " wightIndx: " << getWeightIndex() << "\n";
}

Person::Person(int age, double height, double weight, const char *name) {
    this->age = age;
    this->height = height;
    this->weight = weight;
    strcpy(this->name, name);
}

double Person::getWeightIndex() const {
    return weight / (height * height);
}

Person::Person() {

}

Person::~Person() {

}

std::vector<Person> sortByIndex(std::vector<Person> &vector1) {
    for (int i = 0; i < vector1.size(); ++i) {
        int min_index = i;
        for (int j = i + 1; j < vector1.size(); ++j) {
            if (vector1[min_index].getWeightIndex() > vector1[j].getWeightIndex()) {
                min_index = j;
            }

            Person temp = vector1[min_index];
            vector1[min_index] = vector1[i];
            vector1[i] = temp;
        }

    }
    return vector1;
}

std::vector<Person> sortByAge(std::vector<Person> &vector1) {
    for (int i = 0; i < vector1.size(); ++i) {
        int min_index = i;
        for (int j = i + 1; j < vector1.size(); ++j) {
            if (vector1[min_index].getAge() > vector1[j].getAge()) {
                min_index = j;
            }

            Person temp = vector1[min_index];
            vector1[min_index] = vector1[i];
            vector1[i] = temp;
        }

    }
    return vector1;
}
void print(std::vector<Person> vector) {
    for (auto &i : vector) {
        i.printPerson();
    }
}

int main() {
    Person person1(20, 165, 70, "Test");
    Person person2(10, 100, 40, "Test1");
    Person person3(15, 175, 65, "Test2");
    Person person4(1, 60, 5, "Test3");
    std::vector<Person> persons;
    persons.push_back(person1);
    persons.push_back(person2);
    persons.push_back(person3);
    persons.push_back(person4);
    sortByIndex(persons);
    sortByAge(persons);
    print(persons);
    std::cout<<"The most elderly persons: " << "\n";
    for (int i = persons.size()-1; i >= 0 ; --i) {
        if (persons[i].getAge() == persons[i-1].getAge()){
            persons[i].printPerson();
            persons[i-1].printPerson();
        }else{
            persons[i].printPerson();
            break;
        }
    }
    double average;
    double sum = 0;
    for (int j = 0; j < persons.size(); ++j) {
       sum += persons[j].getWeightIndex();
    }
    average = sum/persons.size();
    std::cout<<"Average: " << average << "\n";
    std::cout<<"Persons below average: " << "\n";
    for (int k = 0; k < persons.size(); ++k) {
        if(persons[k].getWeightIndex() < average){
            persons[k].printPerson();
        }
    }
    return 0;
}


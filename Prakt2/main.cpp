#include <iostream>


class Person {

private:
    int age;
    double height;
    double weight;
    char name[20];

public:
    Person(int age, double height, double weight, char *name);

    ~Person();

    void printPerson();

    void setAge(int age);

    int getAge() const;

    void setHeight(double height);

    double getHeight() const;

    double getWeight() const;

    void setWeight(double weight);

    const char *getName() const;

    double getWeightIndex();
};

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

Person::Person(int age, double height, double weight, char *name) {
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


int main() {
    Person person1 = new Person(10,1.60,56.00,)
    Person p[10];
    p[1] = person;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
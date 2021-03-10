#include <iostream>
//FIRST TASK
//Да се дефина структурата Vector, която определя вектор в
// тримерното пространство и функциите за: създаване и извеждане на вектор,
// намиране на дължина на вектор, сума и разлика на два вектора, произведение на вектор с число, нормализация на вектор.
struct vector {
public:
    double a, b, c;

};

void create(vector &vector1) {
    std::cin >> vector1.a;
    std::cin >> vector1.b;
    std::cin >> vector1.c;
};

void print(const vector &v) {
    std::cout << "a: " << v.a << " b: " << v.b << " c: " << v.c << "\n";
};

double len(const vector &v) {
    double len = sqrt(v.a * v.a + v.b * v.b + v.c * v.c);
    return len;
};

void sub(vector &v1, const vector &v2, const vector &v3) {
    v1.a = v2.a + v3.a;
    v1.b = v2.b + v3.b;
    v1.c = v2.c + v3.c;
};

void norm(vector &v1) {
    double v = len(v1);
    v1.a = v1.a / v;
    v1.b = v1.b / v;
    v1.c = v1.c / v;
};

void scalar(vector &vector1, int n) {
    vector1.a *= n;
    vector1.b *= n;
    vector1.c *= n;
};
//end of first task


//Second task
//Задача 2.
//Да се дефинира структура, която определя правоъгълник по двете му страни. Да се дефинират функции,
//които създават и извеждат правоъгълник, намират радиуса на описаната около правоъгълник окръжност, както и лицето и периметърана правоъгълник.
//Да се напише програма, която създава правоъгълник по зададени страни. Извежда правоъгълника.
//Намира и извежда радиуса на описаната около правоъгълника окръжност, периметъра и лицето му.
struct rectangle {
    double a, b;
};

void createRect(rectangle &rectangle1) {
    std::cin >> rectangle1.a;
    std::cin >> rectangle1.b;
}


void printRect(rectangle &rectangle1) {
    std::cout << "rect a: " << rectangle1.a << "\n";
    std::cout << "rect b: " << rectangle1.b << "\n";
}

void radiusRect(const rectangle rectangle1) {
    double a = rectangle1.a;
    double b = rectangle1.b;

    double radius = sqrt(a * a + b * b);
    std::cout << "radius rect: " << radius / 2 << "\n";
}


void areaRect(const rectangle rectangle1) {
    std::cout << "area: " << rectangle1.a * rectangle1.b << "\n";
    std::cout << "perimetar: " << rectangle1.a * 2 + 2 * rectangle1.b << "\n";
}

int main() {
    vector v;
    create(v);
    print(v);
    scalar(v, 2);
    print(v);
    norm(v);
    print(v);
    rectangle rectangle1;
    createRect(rectangle1);
    printRect(rectangle1);
    radiusRect(rectangle1);
    areaRect(rectangle1);
    return 0;
}


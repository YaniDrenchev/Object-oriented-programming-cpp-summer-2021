#include <iostream>

struct vector {
public:
    double a, b, c;

};

void create(vector& vector1) {
    std::cin >> vector1.a;
    std::cin >> vector1.b;
    std::cin >> vector1.c;
};

void print (const vector& v){
    std::cout << "a: " << v.a << " b: "<< v.b << " c: " << v.c << "\n";
};
double len (const vector& v){
    double len = sqrt(v.a * v.a + v.b*v.b + v.c*v.c);
    return len;
};
void sub (vector& v1, const vector& v2, const vector& v3){
    v1.a = v2.a + v3.a;
    v1.b = v2.b + v3.b;
    v1.c = v2.c + v3.c;
};
void norm (vector& v1){
    double v = len(v1);
    v1.a = v1.a / v;
    v1.b = v1.b / v;
    v1.c = v1.c / v;
};
void scalar (vector& vector1, int n){
    vector1.a *= n;
    vector1.b *= n;
    vector1.c *= n;
};

struct square {
    double x,y;
};
void create(square& sq){
    std::cin >> sq.x;
    std::cin >> sq.y;
}
void print(square& sq){
    std::cout << sq.x;
    std::cout << sq.y;
}

int main() {
    vector v;
    create(v);
    print(v);
    scalar(v, 2);
    print(v);
    norm(v);
    print(v);
    std::cout << "len:" << len(v) << "\n";
    return 0;
}


#include <iostream>

#define CATCH_CONFIG_MAIN

#include "Catch2/single_include/catch2/catch.hpp"

#define ABCD 2
#define LOG(x) std::cout << "LOG: " << x << " in file: " << __FILE__ << " on line: " << __LINE__ << " time: " __TIME__ << " date: " << __DATE__<<  "\n";
#define paster(a, b) std::printf( "token" #a " = %d", token##b )

unsigned int Factorial(unsigned int number) {
    return number > 1 ? Factorial(number - 1) * number : 1;
}

TEST_CASE("Factorials are computed", "[factorial]") {
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(2) == 2);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(10) == 3628800);
}

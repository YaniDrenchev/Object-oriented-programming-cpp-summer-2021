//
// Created by Yani Drenchev on 2021-03-23.
//
#define CATCH_CONFIG_MAIN
#include "single_include/catch2/catch.hpp"
#include "../VirtualWallet.cpp"
#include "../Card.cpp"

TEST_CASE("Card withdraw", "[withdraw]"){
    Card c (1, 200);
    REQUIRE(c.withdraw(100));
    REQUIRE(c.getBalance() == 100);
    REQUIRE(c.withdraw(50));
    REQUIRE(c.withdraw(-100) == false);
    REQUIRE(c.withdraw(500) == false);
};

TEST_CASE("Card deposit", "[deposit]") {
    Card c2(1, 200);
    REQUIRE(c2.getBalance() == 200);
    REQUIRE(c2.deposit(100));
    REQUIRE(c2.getBalance() == 300);
    REQUIRE(c2.deposit(-100) == false);
}


TEST_CASE("VirtualWallet registerCard", "[registerCard]") {
    Card c2(1, 200);
    Card c3(2, -200);
    Card c4(3, -200);
    Card c5(4, -200);
    Card c6(5, -200);
    Card c7(6, -200);
    VirtualWallet v;
    REQUIRE( v.registerCard(c2));
    REQUIRE( v.registerCard(c3));
    REQUIRE( v.registerCard(c4));
    REQUIRE( v.registerCard(c5));
    REQUIRE( v.registerCard(c5));
    REQUIRE( v.registerCard(c5) == false);
    REQUIRE(v.makePayment(2,100) == false);
}
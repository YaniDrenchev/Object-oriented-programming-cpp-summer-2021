//
// Created by Yani Drenchev on 2021-03-28.
//

#define CATCH_CONFIG_MAIN
#include "../single_include/catch2/catch.hpp"
#include "../VirtualWallet.cpp"
#include "../Card.cpp"


TEST_CASE("Card valid withdraw", "[withdraw]"){
    Card c (1, 200);
    REQUIRE(c.withdraw(100));
    REQUIRE(c.getBalance() == 100);
    REQUIRE(c.withdraw(50));
    REQUIRE(c.withdraw(-100) == false);
    REQUIRE(c.withdraw(500) == false);
};

TEST_CASE("Card invalid withdraw", "[withdraw]"){
    Card c (1, 50);
    REQUIRE(c.withdraw(-100) == false);
    REQUIRE(c.withdraw(500) == false);
};

TEST_CASE("Card valid deposit", "[deposit]") {
    Card c2(1, 200);
    REQUIRE(c2.getBalance() == 200);
    REQUIRE(c2.deposit(100));
    REQUIRE(c2.getBalance() == 300);
}

TEST_CASE("Card invalid deposit", "[deposit]") {
    Card c2(1, 200);
    REQUIRE(c2.getBalance() == 200);
    REQUIRE(c2.deposit(-100) == false);
}
TEST_CASE("Virtual Wallet registerCard valid size", "[registerCard]") {
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

}

TEST_CASE("Virtual Wallet registerCard invalid size", "[registerCard]") {
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

}


TEST_CASE("Virtual Wallet make valid payment", "[makePayment]"){
    Card c2(1, 200);
    VirtualWallet v;
    v.registerCard(c2);
    REQUIRE(v.makePayment(1,100) == true);
}
TEST_CASE("Virtual Wallet make invalid payment", "[makePayment]"){
    Card c2(1, 200);
    VirtualWallet v;
    v.registerCard(c2);
    REQUIRE(v.makePayment(1,300) == false);
}
TEST_CASE("Virtual Wallet null payment", "[makePayment]"){
    Card c2(1, 200);
    VirtualWallet v;
    v.registerCard(c2);
//    THIS func must return false for me :)
    REQUIRE(v.makePayment(1,0) == true);
}

TEST_CASE("Virtual Wallet feed valid card", "[feedCard]"){
    Card c2(1, 200);
    VirtualWallet v;
    v.registerCard(c2);

    REQUIRE(v.feedCard(1, 200) == true);
}

TEST_CASE("Virtual Wallet feed invalid card", "[feedCard]"){
    Card c2(1, 200);
    VirtualWallet v;
    v.registerCard(c2);

    REQUIRE(v.feedCard(4, 200) == false);
}


TEST_CASE("Virtual Wallet get card counts ", "[feedCard]"){
    Card c2(1, 200);
    VirtualWallet v;
    v.registerCard(c2);

    REQUIRE(v.getCardsCount() == 1);
}
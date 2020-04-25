#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
#include <vector>
#include "Calc.h"
#include <utility>
using std::pair;

TEST_CASE("empty string renturn 0"){
    CHECK(add("") == 0);
}

TEST_CASE("single mun return the num"){
    CHECK(add("7") == 7);
    CHECK(add("82") == 82);
}

TEST_CASE("two imput is added"){
    CHECK(add("7,2") == 9);
    CHECK(add("82,2") == 84);
}

TEST_CASE("alot of numbers added"){
    CHECK(add("7,7,7,7,7") == 35);
    CHECK(add("10,10,10,10,10,10,10,10") == 80);
}
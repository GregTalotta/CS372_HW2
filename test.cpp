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


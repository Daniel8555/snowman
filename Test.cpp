#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include<string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12114411)) == nospaces("_===_\n(...)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13114411)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14114411)) == nospaces("_===_\n(..)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14214411)) == nospaces("_===_\n(o.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11214411)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12214411)) == nospaces("_===_\n(o..)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13214411)) == nospaces("_===_\n(o_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14214411)) == nospaces("_===_\n(o.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11214411)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1223334444));
    CHECK_THROWS(snowman(56665));
    /* Add more checks here */
}


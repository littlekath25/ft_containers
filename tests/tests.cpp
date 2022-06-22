#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/utils/ft_pair.hpp"

using namespace ft;

TEST_CASE( "Pairs", "[pairs]" ) {
    pair<int, char> pair1 (10, 20);
    pair<int, char> pair2 (pair1);
    pair<int, char> pair3 = make_pair('a', 'z');
    pair<int, char> pair4 = pair3;
    pair<std::string, std::string> pair5 ("1234", "4567");
    pair<std::string, std::string> pair6 ("4567", "89");

    REQUIRE( pair1 == pair2);
    REQUIRE( pair1 != pair4 );
    REQUIRE( pair1 < pair3 );
    REQUIRE( pair1 <= pair3 );
    REQUIRE( pair6 >= pair5 );
    REQUIRE( pair6 > pair5 );
}

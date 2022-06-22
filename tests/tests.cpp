#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/utils/ft_pair.hpp"
#include "../src/utils/ft_type_traits.hpp"
#include <map>
#include <vector>
#include <stack>

using namespace std;

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

TEST_CASE( "Integral", "[integral]" ) {
    REQUIRE( is_integral<bool>::value);
    REQUIRE( is_integral<char>::value);
    REQUIRE( is_integral<char16_t>::value);
    REQUIRE( is_integral<char32_t>::value);
    REQUIRE( is_integral<wchar_t>::value);
    REQUIRE( is_integral<signed char>::value);
    REQUIRE( is_integral<short int>::value);
    REQUIRE( is_integral<int>::value);
    REQUIRE( is_integral<long int>::value);
    REQUIRE( is_integral<long long int>::value);
    REQUIRE( is_integral<unsigned char>::value);
    REQUIRE( is_integral<unsigned short int>::value);
    REQUIRE( is_integral<unsigned int>::value);
    REQUIRE( is_integral<unsigned long int>::value);
    REQUIRE( is_integral<unsigned long long int>::value);

    REQUIRE( is_integral<std::string>::value == false);
    REQUIRE( is_integral<float>::value == false);
    REQUIRE( is_integral<double>::value == false);
    REQUIRE( is_integral<long double>::value == false);
}


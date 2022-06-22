#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/utils/ft_pair.hpp"

TEST_CASE( "Pairs", "[pairs]" ) {
    ft::pair<int, char> ft_pair1 (10, 20);
    ft::pair<int, char> ft_pair2 = ft::make_pair('a', 'z');
    ft::pair<int, char> ft_pair3 (ft_pair1);

    std::pair<int, char> pair1 (10, 20);
    std::pair<int, char> pair2 = std::make_pair('a', 'z');
    std::pair<int, char> pair3 (pair1);

    REQUIRE( ft_pair1 == pair1 );
    REQUIRE( ft_pair1 == pair1 );
}
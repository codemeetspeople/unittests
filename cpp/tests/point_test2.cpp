#include "../point/Point.h"
#include "catch.hpp"

TEST_CASE( "test Point 2", "[Point]" ) {

    Point p1 = Point();
    Point p2 = Point();
    Point p3 = Point(1, 10);
    
    SECTION( "Point: test operator" ) {
        REQUIRE(p1 == p2);
        REQUIRE(p1 != p3);
        REQUIRE_FALSE(p3 == p2);
        REQUIRE_FALSE(p1 != p2);
    }
}
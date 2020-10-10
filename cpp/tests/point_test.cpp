#include "../point/Point.h"
#include "catch.hpp"

TEST_CASE( "test Point", "[Point]" ) {

    Point p1 = Point();
    Point p2 = Point();
    Point p3 = Point(1, 10);
    
    SECTION( "Point: test constructor" ) {
        REQUIRE(p1.getX() == 0);
        REQUIRE(p1.getY() == 0);

        REQUIRE(p3.getX() == 1);
        REQUIRE(p3.getY() == 10);
    }

    SECTION( "Point: test setters" ) {
        p1.setX(10);
        p1.setY(25);

        REQUIRE(p1.getX() == 10);
        REQUIRE(p1.getY() == 25);
    }
}
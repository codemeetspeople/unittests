#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point {
    private:
        double x;
        double y;

    public:
        Point(double x=0, double y=0);
        virtual ~Point();

        double getX() const;
        double getY() const;

        void setX(double value);
        void setY(double value);

        bool operator==(const Point& other) const;
        bool operator!=(const Point& other) const;

        double distance(const Point& other) const;
};

std::ostream& operator<<(std::ostream& out, const Point& other);

#endif //POINT_H

#include "Point.h"

Point::Point(double x, double y): x(x), y(y) {}

Point::~Point() {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double value) {
    this->x = value;
}

void Point::setY(double value) {
    this->y = value;
}

bool Point::operator==(const Point& other) const {
    return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

double Point::distance(const Point& other) const {
    return hypot(this->x-other.x, this->y-other.y);
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "(" << point.getX() << ", " << point.getY() << ")";
    return out;
}

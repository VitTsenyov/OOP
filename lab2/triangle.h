#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include <iostream>

struct Point {
    double x, y;
};

struct Triangle {
    Point a, b, c;

    Triangle(Point a, Point b, Point c);

    double area() const;

    bool contains(const Point& p) const;
};

double cross_product(Point a, Point b, Point c);

#endif // TRIANGLE_H


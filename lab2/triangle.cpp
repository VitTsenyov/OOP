#include "triangle.h"
#include <cmath>

Triangle::Triangle(Point a, Point b, Point c)
    : a(a), b(b), c(c) {}

double Triangle::area() const {
    return 0.5 * std::abs(cross_product(a, b, c));
}

bool Triangle::contains(const Point& p) const {
    double cp1 = cross_product(a, b, p);
    double cp2 = cross_product(b, c, p);
    double cp3 = cross_product(c, a, p);

    return (cp1 >= 0 && cp2 >= 0 && cp3 >= 0) || 
           (cp1 <= 0 && cp2 <= 0 && cp3 <= 0);
}

double cross_product(Point a, Point b, Point c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}
#include "triangle.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

std::vector<Point> get_users_triangles() {
    int count;
    std::vector<Point> points;

    std::cout << "Enter number of points:\n>>> ";
    std::cin >> count;

    while (count > 0) {
        double x, y;
        std::cout << "[" << "Remaining: " << count << "] >> ";
        std::cin >> x >> y;
        points.push_back({x, y});
        --count;
    }

    return points;
}

void task_one(Triangle& triangle, Point& point) {
    std::cout << "\n[ T A S K   O N E ]" << std::endl;
    std::cout << "Alternative method to check point-in-triangle using vector cross product.\n";

    std::cout << "Triangle: ("
              << triangle.a.x << ", " << triangle.a.y << "; "
              << triangle.b.x << ", " << triangle.b.y << "; "
              << triangle.c.x << ", " << triangle.c.y << ")\n";

    std::cout << "Triangle " 
              << (triangle.contains(point) ? "contains " : "doesn't contain ")
              << "point (" << point.x << ", " << point.y << ")\n";

    std::cout << "[ --------------- ]\n";
}

void task_two(Triangle& triangle) {
    std::cout << "\n[ T A S K   T W O ]" << std::endl;
    std::cout << "Checking if the triangle is degenerate.\n";

    double area = triangle.area();
    std::cout << "Triangle is " 
              << (area == 0 ? "degenerate" : "not degenerate") 
              << " (Area: " << area << ")\n";

    std::cout << "[ --------------- ]\n";
}

int main() {
    Triangle triangle({-3, -3}, {-1, -1}, {0, 0});

    for (auto& point : get_users_triangles()) {
        task_one(triangle, point);
    }

    task_two(triangle);

    return 0;
}


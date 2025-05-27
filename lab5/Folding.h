#pragma once
#ifndef FOLDING_H
#define FOLDING_H

#include "Laptop.h"
#include <string>
using namespace std;

class Folding : virtual public Laptop {
protected:
    bool touchscreen;
    int foldAngle;

public:
    Folding(std::string brand = "Lenovo", float screenSize = 13.3, int ram = 8, bool touchscreen = true, int foldAngle = 360)
        : Laptop(brand, screenSize, ram), touchscreen(touchscreen), foldAngle(foldAngle) {}

    void showSpecs() override;

    ~Folding() {}
};

#endif

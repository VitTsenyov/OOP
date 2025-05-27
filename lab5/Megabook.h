#pragma once
#ifndef MEGABOOK_H
#define MEGABOOK_H

#include "Convertible.h"
#include "Buisiness.h"
#include "Laptop.h"

#include <iostream>
#include <string>

using namespace std;

class Megabook : public Convertible, public Buisiness, public Folding {
protected:
    string screenResolution;
    int CPUCount;

public:
    Megabook(string brand = "Lenovo", float screenSize = 14.0, int ram = 16,
             float weight = 1.4, int batteryLife = 12, bool fingerprintReader = true,
             bool TPMModule = true, bool touchscreen = true, int foldAngle = 360,
             bool detachableKeyboard = true, string screenResolution = "1920x1080", int CPUCount = 8)
        : screenResolution(screenResolution), CPUCount(CPUCount)
        { cout << "\t\t\tMegabook was created!\n"; }

    void showSpecs() override;

    ~Megabook() {
        cout << "\t\t\tMegabook was deleted!\n" << endl;
    }
};

#endif

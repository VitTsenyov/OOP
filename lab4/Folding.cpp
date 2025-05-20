#include "Folding.h"
#include <iostream>
using namespace std;

void Folding::showSpecs() {
    Laptop::showSpecs();
    cout << "Touchscreen: " << (touchscreen ? "Yes" : "No")
         << ", Fold angle: " << foldAngle << "°\n";
}

#include "Ultrabook.h"

using namespace std;

void Ultrabook::showSpecs() {
  Laptop::showSpecs();
  cout << "Weight: " << weight << "kg, Battery: " << batteryLife << "h\n";
}
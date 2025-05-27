#include "Gaming.h"
#include "Laptop.h"

void Gaming::showSpecs() {
  Laptop::showSpecs();
  cout << "GPU: " << gpuModel << ", Cooling fans: " << coolingFans << "\n";
}
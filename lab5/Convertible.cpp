#include "Convertible.h"

void Convertible::showSpecs() {
  Folding::showSpecs();
  cout << "Detachable keyboard: " << (detachableKeyboard ? "Yes" : "No") << "\n";
}
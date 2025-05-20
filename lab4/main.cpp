#include <iostream>
#include <string>

#include "Laptop.h"
#include "Gaming.h"
#include "Folding.h"
#include "Ultrabook.h"
#include "Buisiness.h"
#include "Convertible.h"

using namespace std;

int main() {
  Gaming *gaming_laptop = new Gaming();
  Folding *folding_laptop = new Folding();
  Ultrabook *ultrabook_laptop = new Ultrabook();

  cout << "Gaming laptop: "; gaming_laptop->showSpecs();
  cout << "Folding laptop: "; folding_laptop->showSpecs();
  cout << "Ultrabook laptop: "; ultrabook_laptop->showSpecs();
}
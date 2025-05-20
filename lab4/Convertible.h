#pragma once
#ifndef CONVERTIBLE_H
#define CONVERTIBLE_H

#include <iostream>
#include <string>
#include "Laptop.h"
#include "Folding.h"
using namespace std;

class Convertible : public Folding {
  protected:
      bool detachableKeyboard;
  
  public:
      Convertible(string brand = "Asus", float screenSize = 12.5, int ram = 8,
                  bool touchscreen = true, int foldAngle = 360, bool detachableKeyboard = true)
          : Folding(brand, screenSize, ram, touchscreen, foldAngle),
            detachableKeyboard(detachableKeyboard) {}
  
      void showSpecs() override;
  
      ~Convertible() {}
  };

#endif
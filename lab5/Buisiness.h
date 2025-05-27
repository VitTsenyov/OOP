#pragma once
#ifndef BUISINESS_H
#define BUISINESS_H

#include <iostream>
#include <string>
#include "Laptop.h"
#include "Ultrabook.h"

using namespace std;

class Buisiness : virtual public Ultrabook {
  protected:
      bool fingerprintReader;
      bool TPMModule;
  
  public:
      Buisiness(string brand = "HP", float screenSize = 14.0, int ram = 16,
                float weight = 1.3, int batteryLife = 10, bool fingerprintReader = true, bool TPMModule = true)
          : Ultrabook(brand, screenSize, ram, weight, batteryLife),
            fingerprintReader(fingerprintReader), TPMModule(TPMModule) {}
  
      void showSpecs() override;
  
      ~Buisiness() {}
  };

#endif
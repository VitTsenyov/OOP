#pragma once
#ifndef GAMING_H
#define GAMING_H

#include <iostream>
#include <string>
#include "Laptop.h"

class Gaming : public Laptop {
  protected:
      string gpuModel;
      int coolingFans;
  
  public:
      Gaming(string brand = "MSI", float screenSize = 17.3, int ram = 16, string gpuModel = "RTX 3070", int coolingFans = 2)
          : Laptop(brand, screenSize, ram), gpuModel(gpuModel), coolingFans(coolingFans) {}
  
      void showSpecs() override;
  
      ~Gaming() {}
  };

#endif
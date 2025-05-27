#pragma once
#ifndef ULTRABOOK_H
#define ULTRABOOK_H

#include <iostream>
#include <string>
#include "Laptop.h"

using namespace std;

class Ultrabook : virtual public Laptop {
  protected:
      float weight;
      int batteryLife;
  
  public:
      Ultrabook(string brand = "Dell", float screenSize = 14.0, int ram = 8, float weight = 1.2, int batteryLife = 12)
          : Laptop(brand, screenSize, ram), weight(weight), batteryLife(batteryLife) {}
  
      void showSpecs() override;
  
      ~Ultrabook() {}
  };
  
#endif
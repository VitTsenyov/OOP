#pragma once
#ifndef LAPTOP_H
#define LAPTOP_H

#include <iostream>
#include <string>
using namespace std;

class Laptop {
  protected:
      string brand;
      float screenSize;
      int ram;
  
  public:
      Laptop(string brand = "Generic", float screenSize = 15.6, int ram = 8)
          : brand(brand), screenSize(screenSize), ram(ram) {}
      virtual void showSpecs();
      virtual ~Laptop() {}
  };

#endif
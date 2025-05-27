#include "Megabook.h"


void Megabook::showSpecs() {
  cout << "=== Megabook Specifications ===" << endl;
  Convertible::showSpecs();
  cout << "Fingerprint Reader: " << (fingerprintReader ? "Yes" : "No") << endl;
  cout << "TPM Module: " << (TPMModule ? "Yes" : "No") << endl;
  cout << "Screen Resolution: " << screenResolution << endl;
  cout << "CPU Cores: " << CPUCount << endl;
}
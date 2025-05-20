#include "Buisiness.h"
#include "Ultrabook.h"


void Buisiness::showSpecs() {
  Ultrabook::showSpecs();
  cout << "Fingerprint Reader: " << (fingerprintReader ? "Yes" : "No")
       << ", TPM Module: " << (TPMModule ? "Yes" : "No") << "\n";
}
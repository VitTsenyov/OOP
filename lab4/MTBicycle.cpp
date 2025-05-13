#include "MTBicycle.h"
#include <iostream>

MTBicycle::MTBicycle(const std::string& brand,
                     const std::string& model,
                     int gearCount,
                     float weight,
                     const MTBDetails& details)
    : Bicycle(brand, model, gearCount, weight, details) {}

void MTBicycle::ride() {
    std::cout << "Mountain bike is riding on rough terrain!" << std::endl;
}

void MTBicycle::upgradeDetails(const MTBDetails& newDetails) {
    details = newDetails;
}

#include "RoadBicycle.h"
#include <iostream>

RoadBicycle::RoadBicycle(const std::string& brand,
                         const std::string& model,
                         int gearCount,
                         float weight,
                         const RoadDetails& details)
    : Bicycle(brand, model, gearCount, weight, details) {}

void RoadBicycle::ride() {
    std::cout << "Road bike is riding smoothly on pavement!" << std::endl;
}

void RoadBicycle::upgradeDetails(const RoadDetails& newDetails) {
    details = newDetails;
}

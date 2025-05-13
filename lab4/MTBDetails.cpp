#include "MTBDetails.h"
#include <iostream>

MTBDetails::MTBDetails(const std::string& frameMaterial,
                       const std::string& color,
                       const std::string& suspensionType)
    : Details(frameMaterial, color), suspensionType(suspensionType) {}

void MTBDetails::display() const {
    Details::display();
    std::cout << "Suspension Type: " << suspensionType << std::endl;
}

std::string MTBDetails::getSuspensionType() const { return suspensionType; }
void MTBDetails::setSuspensionType(const std::string& suspensionType) { this->suspensionType = suspensionType; }

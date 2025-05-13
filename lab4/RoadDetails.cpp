#include "RoadDetails.h"
#include <iostream>

RoadDetails::RoadDetails(const std::string& frameMaterial,
                         const std::string& color,
                         const std::string& handlebarType)
    : Details(frameMaterial, color), handlebarType(handlebarType) {}

void RoadDetails::display() const {
    Details::display();
    std::cout << "Handlebar Type: " << handlebarType << std::endl;
}

std::string RoadDetails::getHandlebarType() const { return handlebarType; }
void RoadDetails::setHandlebarType(const std::string& handlebarType) { this->handlebarType = handlebarType; }

#include "Details.h"

Details::Details(const std::string& frameMaterial, const std::string& color)
    : frameMaterial(frameMaterial), color(color) {}

void Details::display() const {
    std::cout << "Frame Material: " << frameMaterial
              << "\nColor: " << color << std::endl;
}

std::string Details::getFrameMaterial() const { return frameMaterial; }
void Details::setFrameMaterial(const std::string& frameMaterial) { this->frameMaterial = frameMaterial; }

std::string Details::getColor() const { return color; }
void Details::setColor(const std::string& color) { this->color = color; }

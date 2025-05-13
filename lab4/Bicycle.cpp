#include "Bicycle.h"

Bicycle::Bicycle(const std::string& brand,
                 const std::string& model,
                 int gearCount,
                 float weight,
                 const Details& details)
    : brand(brand), model(model), gearCount(gearCount), weight(weight), details(details) {}

void Bicycle::ride() {
    std::cout << "The bicycle is now riding." << std::endl;
}

void Bicycle::brake() {
    std::cout << "The bicycle is braking." << std::endl;
}

void Bicycle::displayInfo() const {
    std::cout << "Brand: " << brand << "\nModel: " << model
              << "\nGears: " << gearCount << "\nWeight: " << weight << "kg" << std::endl;
    details.display();
}

std::string Bicycle::getBrand() const { return brand; }
void Bicycle::setBrand(const std::string& brand) { this->brand = brand; }

std::string Bicycle::getModel() const { return model; }
void Bicycle::setModel(const std::string& model) { this->model = model; }

int Bicycle::getGearCount() const { return gearCount; }
void Bicycle::setGearCount(int gearCount) { this->gearCount = gearCount; }

float Bicycle::getWeight() const { return weight; }
void Bicycle::setWeight(float weight) { this->weight = weight; }

Details Bicycle::getDetails() const { return details; }
void Bicycle::setDetails(const Details& details) { this->details = details; }

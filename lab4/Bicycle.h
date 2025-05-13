#pragma once
#include <string>
#include <iostream>
#include "Details.h"

class Bicycle {
protected:
    std::string brand;
    std::string model;
    int gearCount;
    float weight;
    Details details;

public:
    Bicycle(const std::string& brand,
            const std::string& model,
            int gearCount,
            float weight,
            const Details& details);

    virtual void ride();
    virtual void brake();
    virtual void displayInfo() const;

    std::string getBrand() const;
    void setBrand(const std::string& brand);

    std::string getModel() const;
    void setModel(const std::string& model);

    int getGearCount() const;
    void setGearCount(int gearCount);

    float getWeight() const;
    void setWeight(float weight);

    Details getDetails() const;
    void setDetails(const Details& details);

    virtual ~Bicycle() = default;
};

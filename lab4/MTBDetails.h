#pragma once
#include "Details.h"

class MTBDetails : public Details {
private:
    std::string suspensionType;

public:
    MTBDetails(const std::string& frameMaterial = "Carbon",
               const std::string& color = "Red",
               const std::string& suspensionType = "Full");

    void display() const override;

    std::string getSuspensionType() const;
    void setSuspensionType(const std::string& suspensionType);
};

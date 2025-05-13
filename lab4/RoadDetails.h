#pragma once
#include "Details.h"

class RoadDetails : public Details {
private:
    std::string handlebarType;

public:
    RoadDetails(const std::string& frameMaterial = "Aluminum",
                const std::string& color = "Blue",
                const std::string& handlebarType = "Drop");

    void display() const override;

    std::string getHandlebarType() const;
    void setHandlebarType(const std::string& handlebarType);
};

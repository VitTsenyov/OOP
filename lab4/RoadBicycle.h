#pragma once
#include "Bicycle.h"
#include "RoadDetails.h"

class RoadBicycle : public Bicycle {
public:
    RoadBicycle(const std::string& brand,
                const std::string& model,
                int gearCount,
                float weight,
                const RoadDetails& details);

    void ride() override;
    void upgradeDetails(const RoadDetails& newDetails);
};

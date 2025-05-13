#pragma once
#include "Bicycle.h"
#include "MTBDetails.h"

class MTBicycle : public Bicycle {
public:
    MTBicycle(const std::string& brand,
              const std::string& model,
              int gearCount,
              float weight,
              const MTBDetails& details);

    void ride() override;
    void upgradeDetails(const MTBDetails& newDetails);
};

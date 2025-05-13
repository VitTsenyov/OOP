#include "MTBicycle.h"
#include "RoadBicycle.h"
#include <iostream>

int main() {
    MTBDetails mtbDetails("Carbon", "Red", "Full");
    MTBicycle mtb("Trek", "X-Caliber", 21, 13.5f, mtbDetails);

    RoadDetails roadDetails("Aluminum", "Blue", "Drop");
    RoadBicycle roadBike("Giant", "Defy", 18, 9.8f, roadDetails);

    std::cout << "Mountain Bike Info:" << std::endl;
    mtb.displayInfo();
    mtb.ride();
    mtb.brake();

    std::cout << "\nRoad Bike Info:" << std::endl;
    roadBike.displayInfo();
    roadBike.ride();
    roadBike.brake();


    std::cout << "\n\n--------------------\n\n";
    RoadDetails newDetails("Carbon", "Black", "Ergo");
    roadBike.upgradeDetails(newDetails);

    roadBike.displayInfo();
    roadBike.getDetails().display();
    

    return 0;
}

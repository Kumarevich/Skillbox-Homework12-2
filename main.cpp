#include <iostream>

int main() {
    bool fitness_build[2], market_built[1], house_build[3], high_build[15], skyscraper_build[50];
    int mid = (sizeof(fitness_build) + sizeof(market_built) + sizeof(house_build) + sizeof(high_build) + sizeof(skyscraper_build)) / 5;
    std::cout << "Average height: " << mid << " floors.";
    return 0;
}

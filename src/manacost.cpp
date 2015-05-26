
#include "manacost.h"

ManaCost::ManaCost(std::string cost, int convertedCost) {
    this->cost = cost;
    this->convertedCost = convertedCost;
}

int ManaCost::getConvertedCost() {
    return this->convertedCost;
}
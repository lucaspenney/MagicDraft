
#include "manacost.h"

ManaCost::ManaCost(std::string cost, int convertedCost) {
    this->cost = cost;
    this->convertedCost = convertedCost;
    this->parseManaCost(cost);
}

int ManaCost::getConvertedCost() {
    return this->convertedCost;
}

void ManaCost::parseManaCost(std::string fullCost) {
	while(fullCost.length() > 0) {
		std::size_t found = fullCost.find("{");
		if (found != std::string::npos) {
			std::size_t end = fullCost.find("}");
			std::string cost = fullCost.substr(found + 1, end-1);
			std::unique_ptr<Mana> p(new Mana(cost));
			this->mana.push_back(std::move(p));
			fullCost = fullCost.substr(end+1);
		}
	}
}

#include <string>
#include <vector>
#include <memory>

#include "mana.h"

class ManaCost {
public:
	ManaCost(std::string cost, int convertedCost);
	int getConvertedCost();
private:
	int convertedCost;
	std::string cost;
	std::vector<std::unique_ptr<Mana>> mana;
	void parseManaCost(std::string fullCost);
};
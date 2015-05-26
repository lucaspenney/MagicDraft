
#include <string>

class ManaCost {
public:
	ManaCost(std::string cost, int convertedCost);
	int getConvertedCost();
private:
	int convertedCost;
	std::string cost;
};
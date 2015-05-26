#include <string>
#include "card.h"

class CardFactory {
    public:
    static Card* createCardFromJSON(std::string);
};
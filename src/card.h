
#include <iostream>
#include <string>
#include "manacost.h"

class Card {
public:
    Card(int id, std::string name, std::string text, ManaCost *cost);
    ~Card();
    int getId();
    std::string getName();
    std::string getText();
    ManaCost* getManaCost();
private:
    int id;
    std::string name;
    std::string text;
    ManaCost* manaCost;
};
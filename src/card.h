
#include <iostream>
#include <string>


class Card {
public:
    Card(int id, std::string name, std::string text);
    int getId();
    std::string getName();
    std::string getText();
private:
    int id;
    std::string name;
    std::string text;
};
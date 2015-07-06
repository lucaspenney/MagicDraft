#include <string>

class Player {
public:
    Player(int id);
    const std::string getName();
    const int getId();
private:
    int id;
    std::string name;
};
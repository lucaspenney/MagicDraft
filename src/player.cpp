
#include "player.h"
Player::Player(int id) {
    this->id = id;;
}

const int Player::getId() {
    return this->id;
}

const std::string Player::getName() {
    return this->name;
}
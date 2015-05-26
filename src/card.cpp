
#include "card.h"

Card::Card(int id, std::string name, std::string text, ManaCost* cost) {
    this->id = id;
    this->name = name;
    this->text = text;
    this->manaCost = cost;
}

int Card::getId() {
    return this->id;
}

std::string Card::getName() {
	return this->name;
}

std::string Card::getText() {
	return this->text;
}

ManaCost* Card::getManaCost() {
    return this->manaCost;
}

Card::~Card() {
    delete this->manaCost;
}
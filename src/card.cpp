
#include "card.h"

Card::Card(int id, std::string name, std::string text) {
    this->id = id;
    this->name = name;
    this->text = text;
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
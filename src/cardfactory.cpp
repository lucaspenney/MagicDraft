#include <iostream>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

#include "cardfactory.h"

Card* CardFactory::createCardFromJSON(std::string jsonStr) {
	rapidjson::Document d;
	d.Parse(jsonStr.c_str());;

	//rapidjson::Value& v = d["name"];
	int id = (d["id"]).GetInt();
	std::string name = (d["name"]).GetString();
	std::string text = (d["text"]).GetString();
    std::string cost = (d["mana_cost"]).GetString();
    int convertedCost = (d["converted_cost"]).GetInt();

	return new Card(id, name, text, new ManaCost(cost, convertedCost));
}

std::vector<Card*> CardFactory::createCardsFromJSON(std::string jsonStr) {
	rapidjson::Document d;
	d.Parse(jsonStr.c_str());;
	rapidjson::Value& s = d;

	std::vector<Card*> cards;
	for (rapidjson::SizeType i = 0; i < s.Size(); i++) {
		int id = (s[i]["id"]).GetInt();
		std::string name = (d[i]["name"]).GetString();
		std::string text = "";
		if ((s[i]["text"]).IsString()) {
			text = (d[i]["text"]).GetString();
		}
		std::string cost = "";
		if ((s[i]["mana_cost"]).IsString()) {
			cost = (d[i]["mana_cost"]).GetString();
		}
	    int convertedCost = (d[i]["converted_cost"]).GetInt();
	    cards.push_back(new Card(id, name, text, new ManaCost(cost, convertedCost)));
	}
	return cards;
}
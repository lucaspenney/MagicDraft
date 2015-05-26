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


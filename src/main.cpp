#include <iostream>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

#include "cardfactory.h"


int main() {

	std::string j = "{\"id\":28622,\"num\":\"72\",\"name\":\"Ajani, Caller of the Pride\",\"text\":\"+1: Put a +1/+1 counter on up to one target creature.\\n−3: Target creature gains flying and double strike until end of turn.\\n−8: Put X 2/2 white Cat creature tokens onto the battlefield, where X is your life total.\",\"type\":\"Planeswalker — Ajani\",\"mana_cost\":\"{1}{W}{W}\",\"converted_cost\":3,\"rarity\":\"Special\",\"colors\":\"W\",\"stats\":\"(Loyalty: 4)\",\"set\":{\"id\":10,\"slug\":\"pMEI\",\"name\":\"Media Inserts\"},\"image\":\"ajani, caller of the pride\",\"price\":[]}";

	Card* c = CardFactory::createCardFromJSON(j);
	std::cout << c->getName();
	std::cout << c->getText();
	/*
	// 1. Parse a JSON string into DOM.
	const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
	rapidjson::Document d;
	d.Parse(json);

	// 2. Modify it by DOM.
	rapidjson::Value& s = d["stars"];
	s.SetInt(s.GetInt() + 1);

	// 3. Stringify the DOM
	rapidjson::StringBuffer buffer;
	rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
	d.Accept(writer);
	*/
	return 0;
}
#include <iostream>

#include "httpdownloader.h"
#include "cardfactory.h"


int main() {

	HTTPDownloader* downloader = new HTTPDownloader;

	std::string pack = downloader->download("http://manastack.com/api/pack/m14");

	std::vector<Card*> packCards = CardFactory::createCardsFromJSON(pack);

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
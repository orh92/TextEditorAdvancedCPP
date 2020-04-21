#pragma once
#include <string>
#include "Document.h"



class Editor
{
private:
	string currentLine;
	string searchStr;
	Document docoment;
public:
	Editor();
	~Editor();
	void loop();	
	bool isNumber(string str);
	vector<string> splitByChar(string str, char ch);
};

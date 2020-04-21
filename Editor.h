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
	vector<string> splitByChar(string str, char ch);
};

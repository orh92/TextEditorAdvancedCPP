#pragma once
#include <string>
#include "Document.h"



class Editor
{
private:
	string currentLine = "";
	Document docoment;
public:
	Editor();
	~Editor();
	void loop();	
};

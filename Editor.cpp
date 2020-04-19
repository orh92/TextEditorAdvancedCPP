#include "Editor.h"
# include <iostream>
using namespace std;
Editor::Editor(){}
Editor::~Editor(){}
void Editor::loop()
{
    while ( getline(cin, currentLine))
    {
        if(currentLine=="3n"){docoment.printCurrentLine();}
        if(currentLine=="%p"){docoment.printAll();}
        if(currentLine=="a"){docoment.addAfterTheLine();}
        if(currentLine=="i"){docoment.addBeforTheLine();}
        if(currentLine=="c"){docoment.overrideLine();}
        if(currentLine=="3d"){docoment.deleteLine();}
        if(currentLine=="/text"){docoment.searchForward();}
        if(currentLine=="?text"){docoment.searchBackward();}
        if(currentLine=="s/old/new/"){docoment.swarpWord();}
        if(currentLine=="3,4j"){docoment.appendLines();}
        if(currentLine=="Q"){docoment.q();}
    }
}
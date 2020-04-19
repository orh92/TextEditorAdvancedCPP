#include "Editor.h"
# include <iostream>
using namespace std;
Editor::Editor(){}
Editor::~Editor(){}
void Editor::loop()
{
    while ( getline(cin, currentLine))
    {
        if(currentLine=="3n"){this->docoment.printCurrentLine();}
        if(currentLine=="%p"){this->docoment.printAll();}
        if(currentLine=="a"){this->docoment.addAfterTheLine();}
        if(currentLine=="i"){this->docoment.addBeforTheLine();}
        if(currentLine=="c"){this->docoment.overrideLine();}
        if(currentLine=="3d"){this->docoment.deleteLine();}
        if(currentLine=="/text"){this->docoment.searchForward();}
        if(currentLine=="?text"){this->docoment.searchBackward();}
        if(currentLine=="s/old/new/"){this->docoment.swapWord();}
        if(currentLine=="3,4j"){this->docoment.appendLines();}
        if(currentLine=="Q"){this->docoment.quit();}
    }
}
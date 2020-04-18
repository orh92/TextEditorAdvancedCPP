#include "Editor.h"
# include <iostream>
using namespace std;
Editor::Editor(){}
void Editor::loop()
{
    while (true)
    {
        getline(cin, currentLine);
        cout<<"please enter and input"<<endl;
        cout << currentLine << endl;
    }
}
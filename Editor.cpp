#include "Editor.h"
# include <iostream>
using namespace std;
Editor::Editor(){}
void Editor::loop()
{
    while (true)
    {
        getline(cin, curentLine);
        cout << currentLine << endl;
    }
}
#include "Editor.h"
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
Editor::Editor()
{
 
}
Editor::~Editor() {}
void Editor::loop()
{
    while (true)
    {
         getline(cin,currentLine);
        cout << currentLine << endl;
        if (currentLine.empty())
        {
            continue;
        }
        else if (currentLine.compare("3n") == 0)
        {
            this->docoment.printCurrentLine();
        }
        else if (currentLine.compare("%p") == 0)
        {
            this->docoment.printAll();
        }
        else if (currentLine.compare("a") == 0)
        {
            this->docoment.addAfterTheLine();
        }
        else if (currentLine.compare("i") ==0)
        {
            this->docoment.addBeforTheLine();
        }
        else if (currentLine.compare("c") == 0)
        {
            this->docoment.overrideLine();
        }
        else if (currentLine.compare("3d") == 0)
        {
            this->docoment.deleteLine();
        }
        else if (currentLine[0] == '/')
        {
            string strToSearch="";
            if(!currentLine.substr(1).empty()){
                strToSearch=currentLine.substr(1);
            }
            
            this->docoment.searchForward(strToSearch);
        }
        else if (currentLine[0] == '?')
        {
            string strToSearch="";
            if(!currentLine.substr(1).empty()){
                strToSearch=currentLine.substr(1);
            }
            this->docoment.searchBackward(strToSearch);
        }
        else if (currentLine[0] == 's')
        {

            vector<string> oldNew = splitByChar(currentLine, '/');
            if (oldNew.size() > 2){
            string oldStr=oldNew.at(1);
            string newStr=oldNew.at(2);
            this->docoment.swapWord(oldStr, newStr);
            }
        }
        else if (currentLine == "3,4j")
        {
            this->docoment.appendLines();
        }
        else if (currentLine.compare("Q")==0)
        {
            break;
        }
        else
        {
            cout << "?" << endl;
        }
    }
}
vector<string> Editor::splitByChar(string str, char ch)
{
    stringstream sstr(str);
    string tempStr;
    vector<string> vec;
    while (getline(sstr, tempStr, ch))
    {
        vec.push_back(tempStr);
    }
    return vec;
}
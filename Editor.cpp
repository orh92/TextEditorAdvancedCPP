#include "Editor.h"
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <regex>
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
      
        else if (regex_match(currentLine, regex("[0-9]+[n]")))
        {
            int num=stoi(currentLine.substr(0,currentLine.length()-1));
                this->docoment.printLineByNum(num);
           
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
        else if (regex_match(currentLine, regex("[0-9]+[d]")))
        {
            int num=stoi(currentLine.substr(0,currentLine.length()-1));
              this->docoment.deleteLine(num); 
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
        else if (regex_match(currentLine, regex("[0-9]+[,]+[0-9]+[j]")))
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

bool Editor::isNumber(string str)
{
	if (str.empty())
		return false;

    try{
        int num=-1;
        num=stoi(str);
        if(num!=-1)return true;
        else return false;

    }
    catch(exception e){
   return true;
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
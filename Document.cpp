#include "Document.h"
#include <iostream>
using namespace std;
Document::Document()
{
    this->documentLines = vector<string>();
    this->currentLineIndex = 0;
}
Document::~Document() {}
void Document::printLineByNum(int num)
{
    if (!documentLines.empty())
    {
        cout << num << "\t" << documentLines.at(num-1) << endl;
      this->currentLineIndex=num;

    }
}
void Document::printAll()
{
    if (documentLines.empty())
    {
        return;
    }
    else
    {
        vector<string>::iterator iter;
        for (iter = this->documentLines.begin(); iter < this->documentLines.end();iter++)
        {
            cout<<*iter<<endl;
        }
    }
}
void Document::addAfterTheLine() {
    string str;
	getline(cin, str);
	cout << str <<endl;
	while (!(str.compare(".") == 0))
	{
		auto insertPositionLine = this->documentLines.begin() + this->currentLineIndex;
		 this->documentLines.insert(insertPositionLine, str);
		this->currentLineIndex++;
		getline(cin, str);
		cout << str <<endl;
	}
}
void Document::addBeforTheLine(){
       string str;
	getline(cin, str);
	cout << str <<endl;
	while (!(str.compare(".") == 0))
	{
		auto insertPositionLine = this->documentLines.begin() + this->currentLineIndex-1;
		 this->documentLines.insert(insertPositionLine, str);
		this->currentLineIndex++;
		getline(cin, str);
		cout << str <<endl;
	}
}
void Document::overrideLine() {
    if(currentLineIndex>0){
    	string str;
	getline(cin, str);
	cout << str << endl;
	this->documentLines.at(currentLineIndex - 1) = str;
	this->addAfterTheLine();
    }
    else{
        	string str;
	getline(cin, str);
	cout << str << endl;
	this->documentLines.at(currentLineIndex) = str;
	this->addAfterTheLine();
    }

}
void Document::deleteLine(int num) {

if (this->currentLineIndex > 0)
	{
		this->documentLines.erase(documentLines.begin() + this->currentLineIndex - 1);
		this->currentLineIndex--;
	}
}
void Document::searchForward(string strToSearch) {}
void Document::searchBackward(string strToSearch) {}
void Document::swapWord(string oldStr, string newStr)
{
}
void Document::appendLines() {}

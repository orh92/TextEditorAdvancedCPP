#include "Document.h"
#include <iostream>
using namespace std;
Document::Document()
{
    this->documentLines = vector<string>();
    this->currentLineIndex = 0;
}
Document::~Document() {}
void Document::printCurrentLine()
{
    if (!documentLines.empty())
    {
        cout << currentLineIndex << "\t" << documentLines.at(currentLineIndex) << endl;
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
void Document::addAfterTheLine() {}
void Document::addBeforTheLine() {}
void Document::overrideLine() {}
void Document::deleteLine() {}
void Document::searchForward(string strToSearch) {}
void Document::searchBackward(string strToSearch) {}
void Document::swapWord(string oldStr, string newStr)
{
}
void Document::appendLines() {}

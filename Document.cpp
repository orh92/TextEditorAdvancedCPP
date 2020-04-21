# include "Document.h"

    Document::Document() {
        this->documentData = vector<string>();
	    this->currentLine=0;
    }
    Document::~Document(){}
    void Document::printCurrentLine(){}
    void Document::printAll(){}
    void Document::addAfterTheLine(){}
    void  Document::addBeforTheLine(){}
    void  Document::overrideLine(){}
    void  Document::deleteLine(){}
    void Document::searchForward(string strToSearch){}
    void Document::searchBackward(string strToSearch){}
    void  Document::swapWord(string oldStr,string newStr){

    }
    void Document::appendLines(){}


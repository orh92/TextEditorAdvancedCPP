#pragma once
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Document
{
private:
    vector<string> documentLines;
    int currentLineIndex;

public:
    Document();
    ~Document();
    void printCurrentLine(); //print the current line
    void printAll(); //print all the lines of the file
    void addAfterTheLine(); //one line or more after the current line
    void addBeforTheLine(); //one line or more befor the current line
    void overrideLine(); //swap the current line, with one or more lines
    void deleteLine(); //delete current line
    void searchForward(string strToSearch); //search the first line that contains the string "s" and print it / else go to last line of the file
    void searchBackward(string strToSearch); //search the first line that contains the string "s" and print it / else go to last line of the file
    void swapWord(string oldStr, string newStr); //swap the first appearens of the old string with the new string
    void appendLines(); //combine lines
};
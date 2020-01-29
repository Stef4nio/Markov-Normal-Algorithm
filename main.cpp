#include <iostream>
#include <fstream>
#include "Node.h"

using namespace std;

void stringToLinkedList(Node<char>** list,char string[],int stringLength)
{
    Node<char>* tempNextNode;
    for(int i = stringLength; i > 0; i--)
    {
        tempNextNode = new Node<char>;
        tempNextNode->Data = string[i-1];
        tempNextNode->NextNode = *list;
        *list = tempNextNode;
    }
}

bool findAndReplace(Node<char>** list,char findString[],char replaceString[])
{
    Node<char>* currPosition = *list;
    int charsMatched = 0;
    Node<char>* firstMatchedChar;
    while(currPosition!=NULL)
    {
        if(currPosition->Data == findString[charsMatched])
        {
            firstMatchedChar = currPosition;
            charsMatched++;
        } else
        {
            charsMatched = 0;
        }
        if(findString[charsMatched] == '\0')
        {
            Node<char>* lastCharMatched = currPosition;
        }
        currPosition = currPosition->NextNode;
    }
}

int main() {
    cout << "Hello, World!" << std::endl;
    ifstream input("InputString.txt");
    char inputStr[255];
    input.getline(inputStr,255);
    Node<char>* string;
    stringToLinkedList(&string,inputStr,input.gcount());

    return 0;
}


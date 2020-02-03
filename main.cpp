#include <iostream>
#include <fstream>
#include "Node.h"
#include "NodeFactory.h"
#include "StringList.h"

using namespace std;

/*Node<char>* stringToLinkedList(char string[])
{
    Node<char>* currList = NodeFactory::CreateNode<char>();
    Node<char>* tempNextNode;
    for(int i = strlen(string); i > 0; i--)
    {
        tempNextNode = NodeFactory::CreateNode<char>();
        tempNextNode->Data = string[i-1];
        tempNextNode->NextNode = currList;
        currList = tempNextNode;
    }
    return currList;
}

bool findAndReplace(Node<char>** list,char findString[],char replaceString[])
{
    Node<char>* currPosition = *list;
    int charsMatched = 0;
    Node<char>* firstMatchedChar;
    while(currPosition)
    {
        if(currPosition->Data == findString[charsMatched])
        {
            if(charsMatched == 0)
            {
                firstMatchedChar = currPosition;
            }
            charsMatched++;
        } else
        {
            charsMatched = 0;
        }
        if(findString[charsMatched] == '\0')
        {
            Node<char>* replaceList = stringToLinkedList(replaceString);
            replaceList->AddRangeToEnd(currPosition->NextNode);
            *firstMatchedChar = *replaceList;
            return true;
        }
        currPosition = currPosition->NextNode;
    }
    return false;
}*/

int main() {
    ifstream input("InputString.txt");
    char inputStr[255];
    input.getline(inputStr,255);
    char str[] = "234";
    char str2[] = "228";
    //Node<char>* string;
    //string = stringToLinkedList(inputStr);
    StringList stringlist;
    stringlist.SetString(inputStr);
    stringlist.FindAndReplace(str,str2);
    cout<<stringlist.GetString();
    //cout<<findAndReplace(&string,str,str2);

return 0;
}


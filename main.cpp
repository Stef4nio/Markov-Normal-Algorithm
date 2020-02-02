#include <iostream>
#include <fstream>
#include "Node.h"
#include "NodeFactory.h"
#include <cstring>

using namespace std;

Node<char>* stringToLinkedList(char string[])
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

template <typename T>
void AddRangeToEnd(Node<T>* ListToBeModified,Node<T>* ListToBeAdded)
{
    if(!ListToBeModified)
    {
        *ListToBeModified = *ListToBeAdded;
    }
    Node<T>* list = ListToBeModified;
    while(list->NextNode)
    {
        list = list->NextNode;
    }
    //TODO: find out why and how ofter zero char occurs at the end of the list and edit this line accordingly
    *list = *ListToBeAdded;
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
            AddRangeToEnd(replaceList,currPosition->NextNode);
            *firstMatchedChar = *replaceList;
            return true;
        }
        currPosition = currPosition->NextNode;
    }
    return false;
}

int main() {
    char in1[] = "lol";
    char in2[] = "kek";
    cout << "Hello, World!" << std::endl;
    ifstream input("InputString.txt");
    char inputStr[255];
    input.getline(inputStr,255);
    char str[] = "dic";
    char str2[] = "cockBlya";
    Node<char>* string;
    string = stringToLinkedList(inputStr);
    cout << "Hello, World!" << std::endl;

    cout<<findAndReplace(&string,str,str2);

    return 0;
}


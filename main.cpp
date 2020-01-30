#include <iostream>
#include <fstream>
#include "Node.h"
#include <cstring>

using namespace std;

void stringToLinkedList(Node<char>** list,char string[])
{
    Node<char>* tempNextNode;
    for(int i = strlen(string); i > 0; i--)
    {
        tempNextNode = new Node<char>;
        tempNextNode->Data = string[i-1];
        tempNextNode->NextNode = *list;
        *list = tempNextNode;
    }
}

template <typename T>
void AddRangeToEnd(Node<T>* ListToBeModified,Node<T>* ListToBeAdded)
{
    while(ListToBeModified==NULL)
    {
        ListToBeModified = ListToBeModified->NextNode;
    }
    *ListToBeModified = Node<T>();
    ListToBeModified->NextNode = ListToBeAdded;
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
            Node<char>* replaceList;
            stringToLinkedList(&replaceList,findString);
            AddRangeToEnd(replaceList,currPosition->NextNode);
            return true;
        }
        currPosition = currPosition->NextNode;
    }
    return false;
}

int main() {
    cout << "Hello, World!" << std::endl;
    ifstream input("InputString.txt");
    char inputStr[255];
    input.getline(inputStr,255);
    Node<char>* string;
    stringToLinkedList(&string,inputStr);

    Node<char>* testList1;
    Node<char>* testList2;
    stringToLinkedList(&testList1,"lol");
    stringToLinkedList(&testList2,"kek");
    AddRangeToEnd(testList1,testList2);
    cout<<"adding complete";

    return 0;
}


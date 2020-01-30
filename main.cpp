#include <iostream>
#include <fstream>
#include "Node.h"
#include <cstring>

using namespace std;

Node<char>* stringToLinkedList(char string[])
{
    Node<char>* currList = new Node<char>;
    Node<char>* tempNextNode;
    for(int i = strlen(string); i > 0; i--)
    {
        tempNextNode = new Node<char>;
        tempNextNode->Data = string[i-1];
        tempNextNode->NextNode = currList;
        currList = tempNextNode;
    }
    return currList;
}

template <typename T>
void AddRangeToEnd(Node<T>* ListToBeModified,Node<T>* ListToBeAdded)
{
    Node<T>* list = ListToBeModified;
    while(list==NULL)
    {
        list = ListToBeModified->NextNode;
    }
    //*ListToBeModified = Node<T>();
    list->NextNode = ListToBeAdded;
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
            Node<char>* replaceList = stringToLinkedList(findString);
            AddRangeToEnd(replaceList,currPosition->NextNode);
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
    Node<char>* testList1;
    Node<char>* string;
    Node<char>* testList2;
    testList1 = stringToLinkedList(in1);
    testList2 = stringToLinkedList(in2);
    string = stringToLinkedList(inputStr);

    cout << "Hello, World!" << std::endl;



    AddRangeToEnd(testList1,testList2);
    cout<<"adding complete";

    return 0;
}


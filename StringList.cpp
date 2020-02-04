//
// Created by stef4 on 2/3/2020.
//

#include "StringList.h"
#include <cstring>

Node<char>* StringToLinkedList(char string[])
{
    Node<char>* result = NodeFactory::CreateNode<char>();
    Node<char>* tempNextNode;
    for(int i = strlen(string); i > 0; i--)
    {
        tempNextNode = NodeFactory::CreateNode<char>();
        tempNextNode->Data = string[i-1];
        tempNextNode->NextNode = result;
        result = tempNextNode;
    }
    return result;
}

void StringList::SetString(char string[])
{
    stringList = StringToLinkedList(string);
    UpdateString();
}

void StringList::UpdateString()
{
    int count = 0;
    Node<char>* tempList = stringList;
    while (tempList)
    {
        value[count] = tempList->Data;
        tempList = tempList->NextNode;
        count++;
    }
    //return string;
}

void StringList::AddRangeToEnd(char *string)
{
    StringList range;
    range.SetString(string);
    stringList->AddRangeToEnd(range.stringList);
    UpdateString();
}

void StringList::AddRangeToEnd(StringList string)
{
    stringList->AddRangeToEnd(string.stringList);
    UpdateString();
}

bool StringList::FindAndReplace(char findString[], char replaceString[])
{
    Node<char>* currPosition = this->stringList;
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
            Node<char>* replaceList = StringToLinkedList(replaceString);
            replaceList->AddRangeToEnd(currPosition->NextNode);
            *firstMatchedChar = *replaceList;
            UpdateString();
            return true;
        }
        currPosition = currPosition->NextNode;
    }
    return false;
}

char *StringList::GetString() {
    return value;
}


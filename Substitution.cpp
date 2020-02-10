//
// Created by stef4 on 2/2/2020.
//

#include "Substitution.h"
#include <cstring>
//#include "iostream"

using namespace std;

Substitution::Substitution(char findString[], char replaceString[], bool isFinishing):IsFinishing(isFinishing)
{
    strcpy(FindString,findString);
    strcpy(ReplaceString,replaceString);
    CheckForZeroChars();
}

Substitution::Substitution(char *initString)
{
    int inputIterator = 0;
    int iterator = 0;
    while(initString[inputIterator] != '-')
    {
        FindString[iterator] = initString[inputIterator];
        iterator++;
        inputIterator++;
    }
    FindString[iterator] = '\0';
    inputIterator++;
    iterator = 0;
    while(initString[inputIterator] != '-')
    {
        ReplaceString[iterator] = initString[inputIterator];
        iterator++;
        inputIterator++;
    }
    inputIterator++;
    ReplaceString[iterator] = '\0';
    IsFinishing = initString[inputIterator]=='1';
    CheckForZeroChars();
    //std::cout << "FindStr: " << FindString << " ReplaceStr: " << ReplaceString << " IsFinishing: " << (IsFinishing?"true":"false") << std::endl;
}

void Substitution::CheckForZeroChars()
{
    if(!strcmp(FindString,"\\0"))
    {
        strcpy(FindString,"\0");
    }
    if(!strcmp(ReplaceString,"\\0"))
    {
        strcpy(ReplaceString,"");
    }

}

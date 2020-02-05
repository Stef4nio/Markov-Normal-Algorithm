//
// Created by stef4 on 2/3/2020.
//

#ifndef MARKOVNORMALALGORYTHM_STRINGLIST_H
#define MARKOVNORMALALGORYTHM_STRINGLIST_H

#include "Node.h"
#include "NodeFactory.h"

class StringList
{
public:
    void SetString(char string[]);
    bool FindAndReplace(char findString[],char replaceString[]);
    void AddRangeToEnd(char *string);
    void AddRangeToEnd(StringList string);
    static const char EMPTY_SYMBOL = '*';
    char *GetString();

private:
    void UpdateString();
    Node<char>* stringList;
    char value[255];
};


#endif //MARKOVNORMALALGORYTHM_STRINGLIST_H

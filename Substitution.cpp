//
// Created by stef4 on 2/2/2020.
//

#include "Substitution.h"
#include <cstring>

using namespace std;

Substitution::Substitution(char findString[], char replaceString[], bool isFinishing):IsFinishing(isFinishing)
{
    strcpy(FindString,findString);
    strcpy(ReplaceString,replaceString);
}


//
// Created by stef4 on 2/2/2020.
//

#ifndef MARKOVNORMALALGORYTHM_SUBSTITUTIONMANAGER_H
#define MARKOVNORMALALGORYTHM_SUBSTITUTIONMANAGER_H

#include "StringList.h"
#include "NodeFactory.h"
#include "Substitution.h"

class SubstitutionManager
{
public:
    void AddSubstitution(char findStr[], char replaceStr[], bool isFinish);
    void AddSubstitution(char initStr[]);
    void ProcessString(StringList* string);
private:
    void PushSubstitutionToList(Substitution substitution);
    Node<Substitution>* _substitutionList = NodeFactory::CreateNode<Substitution>();
    Node<Substitution>* _lastElement = _substitutionList;
    bool isInitialized = false;
};


#endif //MARKOVNORMALALGORYTHM_SUBSTITUTIONMANAGER_H

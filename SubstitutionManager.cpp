//
// Created by stef4 on 2/2/2020.
//

#include "SubstitutionManager.h"
#include "Substitution.h"

void SubstitutionManager::PushSubstitutionToList(Substitution substitution)
{
    if(!isInitialized)
    {
        _lastElement->Data = substitution;
        isInitialized = true;
        return;
    }
    Node<Substitution>* currNode = NodeFactory::CreateNode<Substitution>();
    currNode->Data = substitution;
    _lastElement->NextNode = currNode;
    _lastElement = currNode;
}

void SubstitutionManager::AddSubstitution(char *findStr, char *replaceStr, bool isFinish)
{
    Substitution currSubstitution = Substitution(findStr,replaceStr,isFinish);
    PushSubstitutionToList(currSubstitution);
}

void SubstitutionManager::AddSubstitution(char *initStr)
{
    Substitution currSubstitution = Substitution(initStr);
    PushSubstitutionToList(currSubstitution);
}

void SubstitutionManager::ProcessString(StringList* string)
{
    bool isChanged = false;
    Node<Substitution>* listCopy = _substitutionList;
    while(listCopy!= nullptr)
    {
        Substitution currSubstitution = listCopy->Data;
        if((*string).FindAndReplace(currSubstitution.FindString,currSubstitution.ReplaceString))
        {
            isChanged = true;
            if(currSubstitution.IsFinishing)
            {
                break;
            }
        }
        listCopy = listCopy->NextNode;
        if(listCopy == nullptr && isChanged)
        {
            listCopy = _substitutionList;
        }
    }

}
//
// Created by stef4 on 2/2/2020.
//

#include "SubstitutionManager.h"
#include "Substitution.h"

void SubstitutionManager::AddSubstitution(char *findStr, char *replaceStr, bool isFinish)
{
    Substitution currSubstitution = Substitution(findStr,replaceStr,isFinish);
    Node<Substitution>* currNode = NodeFactory::CreateNode<Substitution>();
    currNode->Data = currSubstitution;
    _lastElement->NextNode = currNode;
    _lastElement = currNode;
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
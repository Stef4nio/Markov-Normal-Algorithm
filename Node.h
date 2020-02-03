//
// Created by FendioStepan on 1/29/2020.
//

#ifndef MARKOVNORMALALGORYTHM_NODE_H
#define MARKOVNORMALALGORYTHM_NODE_H

template <typename T>
struct Node {
    T Data;
    Node<T>* NextNode;
public:
    void AddRangeToEnd(Node<T>* ListToBeAdded)
    {
        if(!this)
        {
            *this = *ListToBeAdded;
        }
        Node<T>* list = this;
        while(list->NextNode)
        {
            list = list->NextNode;
        }
        *list = *ListToBeAdded;
    }
};


#endif //MARKOVNORMALALGORYTHM_NODE_H

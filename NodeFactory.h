//
// Created by stef4 on 2/2/2020.
//
#include "Node.h"
#ifndef MARKOVNORMALALGORYTHM_NODEFACTORY_H
#define MARKOVNORMALALGORYTHM_NODEFACTORY_H


class NodeFactory
{
public:
    template <typename T>
    static Node<T>* CreateNode()
    {
        Node<T>* tempNode = new Node<T>;
        tempNode->NextNode = nullptr;
        return tempNode;
    }
};


#endif //MARKOVNORMALALGORYTHM_NODEFACTORY_H

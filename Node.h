//
// Created by FendioStepan on 1/29/2020.
//

#ifndef MARKOVNORMALALGORYTHM_NODE_H
#define MARKOVNORMALALGORYTHM_NODE_H

template <typename T>
struct Node {
    T Data;
    Node<T>* NextNode;
};


#endif //MARKOVNORMALALGORYTHM_NODE_H

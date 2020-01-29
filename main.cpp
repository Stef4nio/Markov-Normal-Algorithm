#include <iostream>
#include <fstream>
#include "Node.h"

using namespace std;

int main() {
    cout << "Hello, World!" << std::endl;
    ifstream input("InputString.txt");
    Node<char> string;
    while(!input.eof())
    {
        string.Data = input.get();
        Node<char> tempNode;
        string.NextNode = &tempNode;
    }

    
    return 0;
}
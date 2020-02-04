#include <iostream>
#include <fstream>
#include "Node.h"
#include "NodeFactory.h"
#include "StringList.h"

using namespace std;

int main() {
    ifstream stringStream("InputString.txt");
    char inputStr[255];
    stringStream.getline(inputStr, 255);
    stringStream.close();
    ifstream substitutionStream("Substitusions.txt");
    while(!substitutionStream.eof())
    {

    }
    char str[] = "34";
    char str2[] = "1337";
    //Node<char>* string;
    //string = stringToLinkedList(inputStr);
    StringList stringlist;
    stringlist.SetString(inputStr);
    stringlist.FindAndReplace(str,str2);
    cout<<stringlist.GetString();
    //cout<<findAndReplace(&string,str,str2);

return 0;
}


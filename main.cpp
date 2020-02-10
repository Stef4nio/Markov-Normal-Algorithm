#include <iostream>
#include <fstream>
#include "Node.h"
#include "NodeFactory.h"
#include "StringList.h"
#include "SubstitutionManager.h"


using namespace std;

int main() {
    SubstitutionManager manager;
    ifstream stringStream("InputString.txt");
    char inputStr[255];
    stringStream.getline(inputStr, 255);
    stringStream.close();
    ifstream substitutionStream("Substitutions.txt");
    char substitutionInitStr[255];
    while(!substitutionStream.eof())
    {
        substitutionStream.getline(substitutionInitStr,255);
        manager.AddSubstitution(substitutionInitStr);
    }
    StringList stringlist;
    stringlist.SetString(inputStr);
    manager.ProcessString(&stringlist);
    cout<<stringlist.GetString();

return 0;
}


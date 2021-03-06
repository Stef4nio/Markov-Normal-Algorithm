//
// Created by stef4 on 2/2/2020.
//

#ifndef MARKOVNORMALALGORYTHM_SUBSTITUTION_H
#define MARKOVNORMALALGORYTHM_SUBSTITUTION_H


struct Substitution
{
    char FindString[255];
    char ReplaceString[255];
    bool IsFinishing = false;
public:
    Substitution(char findString[], char replaceString[], bool isFinishing);
    Substitution(char initString[]);
    Substitution()
    {
        IsFinishing = false;
    }

private:
    void CheckForZeroChars();
};


#endif //MARKOVNORMALALGORYTHM_SUBSTITUTION_H

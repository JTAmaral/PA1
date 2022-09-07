#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"

class Translator : public Model
{
    private:
        //CHECK FOR VOWEL OR CONSONANT - SHOULD THESE BE PRIVATE?
        bool vowelCheck(char c);
        std::string translateSpace(char c);

    public:
        Translator();
        ~Translator();
        std::string translateEnglishWord(std::string str);
        std::string translateEnglishSentence(std::string str);
};

#endif
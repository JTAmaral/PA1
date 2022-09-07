#include "Translator.h"

Translator::Translator()
{
    std::cout << "Translator is being created...\n";
}
        
Translator::~Translator()
{
    std::cout << "Translator is being destroyed...\n";
}
std::string Translator::translateEnglishWord(std::string str)
{
    std::string strTemp = "";
    for(int i = 0; i < str.size(); ++i) {
        if(vowelCheck(str[i]) == true)
            strTemp += translateSingleVowel(str[i]);
        else
            strTemp += translateSingleConsonant(str[i]);
    }
    return strTemp;
}

std::string Translator::translateEnglishSentence(std::string str)
{
    // for(int i = 0; i < str.size(); ++i) {
        
    // }
}

bool Translator::vowelCheck(char c)
{
    c = toupper(c);
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return true;
    return false;
}

std::string translateSpace(char c)
{
    if(c == ' ')
        return " ";
}
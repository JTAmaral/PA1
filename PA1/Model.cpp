#include "Model.h"

Model::Model()
{
    std::cout << "Model is being created...\n";
}

Model::~Model()
{
    std::cout << "Model is being destroyed...\n";
}

std::string Model::translateSingleConsonant(char c)
{
    std::string str;
    str = c;
    return str + "o" + str;

}

// Convert vowel character to string
// Vowels are left intact
std::string Model::translateSingleVowel(char c)
{
    std::string str;
    str = c;
    return str;
}
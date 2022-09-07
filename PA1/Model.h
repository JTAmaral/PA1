#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>

class Model
{
    public:
        Model();
        ~Model();
        std::string translateSingleConsonant(char c);
        std::string translateSingleVowel(char c);
};

#endif
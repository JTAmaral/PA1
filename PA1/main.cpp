#include <iostream>
#include "Model.h"
#include "Translator.h"

int main()
{
    Translator myTranslator; // translator instead of model obj

    std::string str = "language's";
    str = myTranslator.translateEnglishWord(str);

    std::cout << str << std::endl;


    return 0;
}
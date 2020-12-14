//
// Created by hamed on 12/13/20.
//

#ifndef UNKNOWNPP_COMPILER_H
#define UNKNOWNPP_COMPILER_H

#include <fstream>

#include "Parser.h"
#include "Scanner.h"
#include "global_property.h"

class Compiler {
private:
    Scanner scan;
    Parser parse;
public:
    Compiler ();
    char getToken(bool w);
};


#endif //UNKNOWNPP_COMPILER_H

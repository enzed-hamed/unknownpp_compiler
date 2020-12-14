//
// Created by hamed on 12/13/20.
//

#ifndef UNKNOWNPP_PARSER_H
#define UNKNOWNPP_PARSER_H

#include <iostream>
#include "global_property.h"

class Parser {
public:
    void makevar();
    void valuevar();
    int getvalue();
    int putout();
    void lvl1();
    void error(int e);
};


#endif //UNKNOWNPP_PARSER_H

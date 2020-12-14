//
// Created by hamed on 12/13/20.
//

#ifndef UNKNOWNPP_SCANNER_H
#define UNKNOWNPP_SCANNER_H

#include <iostream>
#include "global_property.h"

class Scanner {

public:
    bool iswhite(char c);
    bool isnvar();
    bool isvar();
    bool issymb(char s);

};


#endif //UNKNOWNPP_SCANNER_H

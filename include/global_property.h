//
// Created by hamed on 12/14/20.
//

// All global objects need to be available at project level
// are declared here

#ifndef UNKNOWNPP_GLOBAL_PROPERTY_H
#define UNKNOWNPP_GLOBAL_PROPERTY_H

#include <string>

using namespace std;


extern char ch,tok,toksym,tokerr;
extern int varcode;
extern string token;
extern ifstream fpc;
extern bool bsym ,berr;


// The class stores variables in form
// of link list.

class vari
{
public:
    string name="";
    int nvar=0;
    double vvar;
    vari *next;
}firstv, *lastv, *nextv;



// All keywords of grammer (symbols, ids, etc) are
// defined as preprocessor directive specified by a
// number, in order to increase efficiency.

#define AZAD 0
#define NEWVAR 1                //New varieble
#define VAR 2                   //Old varieble
#define DELIM 3
#define NUM 4                   //Number
#define PRINT 5
#define GET 6
#define IF 7
#define WHILE 8
#define ERROR 9
#define FINISH 10
#define STRING 11
#define CHAR 12
#define EQ 13                   //  =
#define FL 14                   //  ^
#define PO 15                   //  (
#define PC 16                   //  )
#define DD 17                   //  "
#define OD 18                   //  '
#define PE 19                   //  %
#define AN 20                   //  ,


#endif //UNKNOWNPP_GLOBAL_PROPERTY_H

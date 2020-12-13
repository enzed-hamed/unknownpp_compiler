#include<iostream>
#include<fstream>
#include <stdlib.h>

using namespace std;



//--------------------------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------------------------------------------
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
//--------------------------------------------------------------------------------------------------------------------------------------------------
// all var we have

//--------------------------------------------------------------------------------------------------------------------------------------------------
//Open code

char code[100]="D:\\unknownpp\\code.dat";

//--------------------------------------------------------------------------------------------------------------------------------------------------
//global var

char ch,tok,toksym,tokerr;
int varcode=0;
string token;
ifstream fpc;
bool bsym=0,berr=0;


class vari
{
public:
    string name="";
    int nvar=0;
    double vvar;
    vari *next;
}firstv, *lastv, *nextv;



int main()
{
    Compiler ukpp;

    return 0;
}



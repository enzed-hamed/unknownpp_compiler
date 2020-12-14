//
// Created by hamed on 12/13/20.
//

#include "Scanner.h"

using namespace std;

bool Scanner::iswhite(char c)
{
    if(c=='\0'||c=='\n'||c=='\t'||c==' ')
    {
        return 1;
    }
    return 0;
}

bool Scanner::isnvar()
{
    if(token=="Sahih")
    {
        varcode=1;
        return 1;
    }
    else if(token=="Ashari")
    {
        varcode=2;
        return 1;
    }
    else if(token=="Harf")
    {
        varcode=3;
        return 1;
    }
    else
        return 0;
}


bool Scanner::isvar()
{

    nextv=&firstv;
    while (lastv!=nextv)
    {
        if(nextv->name==token)
        {
            return 1;
        }
        nextv=nextv->next;
    }
    return 0;
}

bool Scanner::issymb(char s)
{
    if(s=='\"')
        toksym=DD;
    else if(s=='\'')
        toksym=OD;
    else if(s==',')
        toksym=AN;
    else if(s=='\%')
        toksym=PE;
    else if(s=='(')
        toksym=PO;
    else if(s==')')
        toksym=PC;
    else if(s=='^')
        toksym=FL;
    else if(s=='=')
        toksym=EQ;
    else
        return 0;
    return 1;
}


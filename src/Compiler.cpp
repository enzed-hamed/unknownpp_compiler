//
// Created by hamed on 12/13/20.
//

#include "Compiler.h"


Compiler::Compiler() {

    // The definition of global variable
    // These vars are declared in "global_property.h"

    char ch,tok,toksym,tokerr;
    int varcode=0;
    string token;
    ifstream fpc;
    bool bsym=0,berr=0;

    //Open code in form of stored ".dat" file from disk
    char code[100]="code.dat";


    lastv=&firstv;
    fpc.open(code);

    while(!fpc.eof())
    {

        tok=getToken(0);
        cout<<token;

        switch(tok)
        {
            case NEWVAR:
                cout<<" new";
                tok=getToken(0);

                if(tok==AZAD)
                {
                    parse.makevar();
                    tok=getToken(0);
                    //if(tok==EQ)

                    if(tok!=FL)
                        parse.error(5);
                }
                else
                    parse.error(12);
                break;

            case VAR:
                cout<<" var";
                break;

            case PRINT:
                parse.error(parse.putout());
                cout<<" print";
                break;

            case GET:
                parse.error(parse.getvalue(this));
                cout<<" get";
                break;

            case IF:
                cout<<" if";
                break;

            case WHILE:
                cout<<" while";
                break;

            case ERROR:
                cout<<"ridi"<<endl;
                break;

            case FINISH: exit(0);
        }
        cout<<endl;
    }
}


char Compiler::getToken(bool w)
{
    tokerr=tok;

    if(berr)
    {
        berr=0;
        return tokerr;
    }
    if(bsym)
    {
        bsym=0;
        return toksym;
    }

    tok=AZAD;
    token="";

    while(!fpc.eof())
    {
        fpc.get(ch);
        if(!scan.iswhite(ch)||w)
        {
            token+=ch;
            break;
        }

    }

    if (scan.issymb(ch))
        return toksym;

    while(!fpc.eof())
    {
        fpc.get(ch);
        if (scan.issymb(ch))
        {
            bsym=1;
            break;
        }
        if(scan.iswhite(ch)&&!w)
            break;
        token+=ch;
    }
    if(token=="agar")
        return IF;
    if(token=="ta")
        return WHILE;
    if(token=="Benevis")
        return PRINT;
    if(token=="Begir")
        return GET;
    if(scan.isnvar())
        return NEWVAR;
    if(scan.isvar())
        return VAR;
}


//
// Created by hamed on 12/13/20.
//

#include "Parser.h"


void Parser::makevar(){
    lastv->name=token;
    lastv->nvar=varcode;
    lastv->next = new vari();
    nextv=lastv;
    lastv=lastv->next;
    cout<<" var "<<token<<endl;
}


void Parser::valuevar()
{

}


int Parser::getvalue()
{
    tok=getToken(0);
    if(tok==PO)
    {
        tok=getToken(0);
        if(tok==DD)
        {
            tok=getToken(0);
            if(tok==PE)
            {
                tok=getToken(0);
                if(token=="d")
                {
                    tok=getToken(0);
                    if(tok==DD)
                    {
                        tok=getToken(0);
                        if(tok==AN)
                        {
                            tok=getToken(0);
                            if(tok==VAR)
                            {
                                if(nextv->nvar==1)
                                {
                                    tok=getToken(0);
                                    if(tok==PC)
                                    {
                                        tok=getToken(0);
                                        if(tok==FL)
                                        {
                                            cout<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<"get int : ";
                                            int te;
                                            cin>>te;
                                            nextv->vvar=te;
                                        }
                                        else
                                            return 1;
                                    }
                                    else
                                        return 2;
                                }
                                else
                                    return 9;
                            }
                            else
                                return 3;
                        }
                        else
                            return 4;
                    }
                    else
                        return 5;
                }
                else if(token=="f")
                {
                    tok=getToken(0);
                    if(tok==DD)
                    {
                        tok=getToken(0);
                        if(tok==AN)
                        {
                            tok=getToken(0);
                            if(tok==VAR)
                            {
                                if(nextv->nvar==2)
                                {
                                    tok=getToken(0);
                                    if(tok==PC)
                                    {
                                        tok=getToken(0);
                                        if(tok==FL)
                                        {
                                            cout<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<"get float : ";
                                            double te;
                                            cin>>te;
                                            nextv->vvar=te;
                                        }
                                        else
                                            return 1;
                                    }
                                    else
                                        return 2;
                                }
                                else
                                    return 10;
                            }
                            else
                                return 3;
                        }
                        else
                            return 4;
                    }
                    else
                        return 5;
                }
                else if(token=="c")
                {
                    tok=getToken(0);
                    if(tok==DD)
                    {
                        tok=getToken(0);
                        if(tok==AN)
                        {
                            tok=getToken(0);
                            if(tok==VAR)
                            {
                                if(nextv->nvar==3)
                                {
                                    tok=getToken(0);
                                    if(tok==PC)
                                    {
                                        tok=getToken(0);
                                        if(tok==FL)
                                        {
                                            cout<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<"get char : ";
                                            char te;
                                            cin>>te;
                                            nextv->vvar=te;
                                        }
                                        else
                                            return 1;
                                    }
                                    else
                                        return 2;
                                }
                                else
                                    return 11;
                            }
                            else
                                return 3;
                        }
                        else
                            return 4;
                    }
                    else
                        return 5;
                }
                else
                    return 6;
            }
            else
                return 7;
        }
        else
            return 5;
    }
    else
        return 8;
    return 0;
}


int Parser::putout()
{
    tok=getToken(0);
    if(tok==PO)
    {
        tok=getToken(0);
        if(tok==DD)
        {
            tok=getToken(0);
            if(tok==PE)
            {
                tok=getToken(0);
                if(token=="d")
                {
                    tok=getToken(0);
                    if(tok==DD)
                    {
                        tok=getToken(0);
                        if(tok==AN)
                        {
                            tok=getToken(0);
                            if(tok==VAR)
                            {
                                if(nextv->nvar==1)
                                {
                                    tok=getToken(0);
                                    if(tok==PC)
                                    {
                                        tok=getToken(0);
                                        if(tok==FL)
                                        {
                                            int te;
                                            te=nextv->vvar;
                                            cout<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<te<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x";
                                        }
                                        else
                                            return 1;
                                    }
                                    else
                                        return 2;
                                }
                                else
                                    return 9;
                            }
                            else
                                return 3;
                        }
                        else
                            return 4;
                    }
                    else
                        return 5;
                }
                else if(token=="f")
                {
                    tok=getToken(0);
                    if(tok==DD)
                    {
                        tok=getToken(0);
                        if(tok==AN)
                        {
                            tok=getToken(0);
                            if(tok==VAR)
                            {
                                if(nextv->nvar==2)
                                {
                                    tok=getToken(0);
                                    if(tok==PC)
                                    {
                                        tok=getToken(0);
                                        if(tok==FL)
                                        {
                                            double te;
                                            te=nextv->vvar;
                                            cout<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<te<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x";
                                        }
                                        else
                                            return 1;
                                    }
                                    else
                                        return 2;
                                }
                                else
                                    return 10;
                            }
                            else
                                return 3;
                        }
                        else
                            return 4;
                    }
                    else
                        return 5;
                }
                else if(token=="c")
                {
                    tok=getToken(0);
                    if(tok==DD)
                    {
                        tok=getToken(0);
                        if(tok==AN)
                        {
                            tok=getToken(0);
                            if(tok==VAR)
                            {
                                if(nextv->nvar==3)
                                {
                                    tok=getToken(0);
                                    if(tok==PC)
                                    {
                                        tok=getToken(0);
                                        if(tok==FL)
                                        {
                                            char te;
                                            te=nextv->vvar;
                                            cout<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<te<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x";
                                        }
                                        else
                                            return 1;
                                    }
                                    else
                                        return 2;
                                }
                                else
                                    return 11;
                            }
                            else
                                return 3;
                        }
                        else
                            return 4;
                    }
                    else
                        return 5;
                }
                else
                    return 6;
            }
            else
            {
                string schap=token;
                tok=getToken(1);
                if(tok!=DD)
                    schap+=" ";
                while(tok!=DD)
                {
                    if(fpc.eof())
                        return 5;
                    schap+=token;
                    tok=getToken(1);
                }
                tok=getToken(0);
                if(tok==PC)
                {
                    tok=getToken(0);
                    if(tok==FL)
                    {
                        cout<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x"<<endl<<schap<<endl<<"-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x";
                    }
                    else
                        return 1;
                }
                else
                    return 2;
            }

        }
        else
            return 5;
    }
    else
        return 8;
    return 0;
}


void Parser::error(int e)
{
    switch(e)
    {
        case 1:
            cout<<endl<<" -/-/-/-/-/-/-/- we dont find (^) -\\-\\-\\-\\-\\-\\-\\- ";berr=1;
            break;
        case 2:
            cout<<endl<<" -/-/-/-/-/-/-/- we dont find ()) -\\-\\-\\-\\-\\-\\-\\- ";berr=1;
            break;
        case 3:
            cout<<endl<<" -/-/-/-/-/-/-/- we dont find (name of var) -\\-\\-\\-\\-\\-\\-\\- ";berr=1;
            break;
        case 4:
            cout<<endl<<" -/-/-/-/-/-/-/- we dont find (,) -\\-\\-\\-\\-\\-\\-\\- ";berr=1;
            break;
        case 5:
            cout<<endl<<" -/-/-/-/-/-/-/- we dont find (\") -\\-\\-\\-\\-\\-\\-\\- ";berr= 1;
            break;
        case 6:
            cout<<endl<<" -/-/-/-/-/-/-/- we dont find (type of var) -\\-\\-\\-\\-\\-\\-\\- ";berr= 1;
            break;
        case 7:
            cout<<endl<<" -/-/-/-/-/-/-/- we dont find (\%) -\\-\\-\\-\\-\\-\\-\\- ";berr= 1;
            break;
        case 8:
            cout<<endl<<R"( -/-/-/-/-/-/-/- we dont find (() -\-\-\-\-\-\-\- )";berr= 1;
            break;
        case 9:
            cout<<endl<<" -/-/-/-/-/-/-/- this var is not sahih -\\-\\-\\-\\-\\-\\-\\- ";berr=1;
            break;
        case 10:
            cout<<endl<<" -/-/-/-/-/-/-/- this var is not ashari -\\-\\-\\-\\-\\-\\-\\- ";berr= 1;
            break;
        case 11:
            cout<<endl<<" -/-/-/-/-/-/-/- this var is not char -\\-\\-\\-\\-\\-\\-\\- ";berr= 1;
            break;
        case 12:
            cout<<endl<<" -/-/-/-/-/-/-/- you made this var later -\\-\\-\\-\\-\\-\\-\\- ";berr=1;
            break;
    }
}


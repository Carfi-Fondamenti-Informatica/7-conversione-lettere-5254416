#include "lib.h"
bool controllo(char & b)
{
    int a=(int)b;
    if(a>=65 && a<=90)
    {
        a=a+32;
        b=(char)a;
        return true;
    }
    else if(a>=97 && a<=122)
    {
        a=a-32;
        b=(char)a;
        return true;
    }
    else
    {
        return false;
    }
}

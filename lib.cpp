
#include "lib.h"
int controllo(char a)
{
    int b;
    if((int)a>=65 && (int)a<=90)
    {
        b=(int)a+32;

    }else if((int)a>=97 && (int)a<=122)
    {
        b=(int)a-32;
    }
    return b;
}

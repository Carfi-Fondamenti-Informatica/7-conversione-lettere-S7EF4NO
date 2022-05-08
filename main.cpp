#include <iostream>
#include "lib.h"
using namespace std;



int main()
{
    char a;;
    cin>>a;
    int b=controllo(a);
    if(b>=65 &&b<=90)
    {
        cout<< (char)b<<endl;
    }else if(b>=97 && b<=122)
    {
        cout<< (char)b<<endl;
    }else
    {
      cout<<"errore"<<endl;
    }

    return 0;
}


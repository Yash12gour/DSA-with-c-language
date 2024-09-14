#include <stdio.h>
#include <stdlib.h>

// static variables in recursion

int fun(int n)
{
    static int x;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;

    }
     return 0;
}

// global variable recursion
int x=0;
int fun1(int n)
{

    if(n>0)
    {
        x++;
        return fun1(n-1)+x;

    }
     return 0;
}
int main()
{
   int e;
    e=fun(5);

   printf("%d\n",e);
    return 0;
}

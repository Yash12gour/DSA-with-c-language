#include <stdio.h>
#include <stdlib.h>
//tail recurssion
void fun(int n)
{

    if(n>0)
        {
        printf("%d ",n);
        fun(n-1);
    }
}
//head recurssion
void fun2(int n)
{

    if(n>0)
        {
        fun2(n-1);
        printf("%d ",n);

    }
}
int main()
{
    int x=3;

    fun(x);
    fun2(x);
    return 0;
}

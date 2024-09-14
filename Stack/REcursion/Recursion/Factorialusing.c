#include<stdio.h>
// recursing method
int factorial(int n)
{
    if(n==0)
        return 1;
    return factorial(n-1)*n;
}
// itrative method
int factorial2(int n)
{
    int i;
    int f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}

int main()
{
    int r;
    r=factorial2(5);
    printf("%d",r);
    return 0;
}


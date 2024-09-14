#include<stdio.h>

// recursing method
int power(int m,int n)
{
    if (n==0)
        return 1;
    return power(m,n-1)*m;
}
// itreative method
int power2(int m,int n)
{
    if (n==0)
        return 1;
    if (n%2==0)
        return power2(m*m,n/2);
        else
    return m*power2(m*m,(n-1)/2);
}
int main()
{
    int r;
    r=power(2,4);
    printf("%d",r);

    return 0;
}


//sum of natural no. using recursion


#include <stdio.h>



// recursion method
int sum(int n)
{

    if(n==0)

        return 0;
    return sum(n-1)+n;


}
// Itrative  method
int sum2(int n)
{
    int i;
    int s=0;
    for(int i=0; i<=n; i++)
        s=s+i;
    return s;
}

//
int main()
{
    int r;
    r=sum2(5);
    printf("%d ",r);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[20];
    int size;
    int length;

};
void Display(struct Array arr)
{
     int i;
     printf("\nelements are\n");
     for (int i=0;i<arr.length;i++)
     {
         printf("%d ",arr.A[i]);
     }
}
int main()
{
    struct Array arr={{2,4,6,8,10},20,5};
    Display(arr);

    return 0;
}

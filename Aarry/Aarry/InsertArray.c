
#include<stdio.h>
#include<stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;

};
void Display(struct Array arr)
{
     int i;
     printf("\n elements are\n");
     for (int i=0;i<arr.length;i++)
     {
         printf("%d ",arr.A[i]);
     }
}
void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
void insert(struct Array*arr,int index,int x)
{
    int i;
    if(index>=0 && index <=arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        }
    }
}
int main()
{
    struct Array arr1={{2,4,6,8,12},10,5};
    Append(&arr1,10);
    insert(&arr1,4,10);
    Display(arr1);

    return 0;
}
/*#include<stdio.h>
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
 void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x)
 {
 int i;

 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 }
int main()
{
struct Array arr1={{2,3,4,5,6},10,5};
Append(&arr1,10);
Insert(&arr1,0,12);
Display(arr1);
 return 0;
}*/

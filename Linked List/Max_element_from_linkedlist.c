#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first =NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int Max(struct Node *p)
{
   int max=-32757;


    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}

int Min(struct Node *p)
{
   int min=32757;


    while(p)
    {
        if(p->data<min)
            min=p->data;
        p=p->next;
    }
    return min;
}


int Rmax(struct Node *p)
{
    int x=0;



    if(p==0)
        return -32757;
    x=Rmax(p->next);
    if(x>p->data)
        return x;
    else
        return p->data;

}



int main()
{

    int A[]={3,5,7,10,25,8,32,86};
    create(A,8);

    printf("Max %d\n",Max(first));
    printf("Min %d\n",Min(first));

    return 0;
}

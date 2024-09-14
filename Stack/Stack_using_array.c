#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overflow cannot push %d to the stack \n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack undeflow cannot pop from  the stack \n");
        return -1;
    }
    else
    {
       int val = ptr->arr[ptr->top];
       ptr->top--;
       return val;
    }
}
int peek(struct stack* sp , int i)
{
    int arrayInd = sp->top -i + 1;
    if(arrayInd <0)
    {
        printf("not a vaild position for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}

int main()
{
    // struct  stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been successfully created\n ");

    printf("before pushing full: %d\n", isFull(sp));
    printf("before pushing empty:%d\n", isEmpty(sp));
    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);   // pushed 10 values 
  //  push(sp, 11);   // stack overflow since the size of the stack is 10
    
    printf("after pushing full: %d\n", isFull(sp));
    printf("after pushing empty: %d\n", isEmpty(sp));



    printf("popped %d from the stack\n",pop(sp)); // last in first out 
     printf("popped %d from the stack\n",pop(sp));// last in first out 
      printf("popped %d from the stack\n",pop(sp));// last in first out 
    // pushing an element manually
    // s->arr[0]= 7;
    //  s->top++;
    // check if stack is empty
    // if(isEmpty(sp))
    // {
    //     printf("the stack is empty ");
    // }
    // else
    // {
    //      printf("the stack is not empty ");
    // }

    // printing values from the stack 
        for (int  j = 1; j <= sp->top + 1; j++)
        {
            printf("the value at the position %d is %d\n",j,peek(sp,j));
        }
        

    return 0;
}

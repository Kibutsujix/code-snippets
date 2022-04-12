// stack representation
#include<stdio.h>
#include<stdlib.h>
#define size 25
void push(int ele,int *top,int stack[])
{
    if(*top == size)
    {
        printf("stack full!\n");
        return;
    }
    else
    {
        stack[++(*top)] = ele;
        return;
    }
}

void pop(int *top,int stack[])
{
    if(*top == -1)
    {
        printf("stack empty\n");
        return;
    }
    else
        printf("%d has been popped\n",stack[(*top)--]);
}

void display(int top,int stack[])
{
    if(top == -1)
    {
        printf("stack empty\n");
        return;
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void main()
{
    int top = -1;
    int stack[size],ch,ele;
    for(;;)
    {
        printf("Enter\n1. to push\n2. to pop\n3. to display\n4. exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            printf("enter element to be pushed : ");
            scanf("%d",&ele);
            push(ele,&top,stack);
            break;
            case 2 :
            pop(&top,stack);
            break;
            case 3 :
            display(top,stack);
            break;
            case 4 :
            exit(0);
            default : printf("Enter input from (1-4) only!!\n");
            break;
        }
    }
}
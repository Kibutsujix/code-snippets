// fibonacci series

#include<stdio.h>
#include<stdlib.h>

// recursive function
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}

void main()
{
    int i,n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
    printf("\n");
}
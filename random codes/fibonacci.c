// nth fibonacci number
#include<stdio.h>
#include<stdlib.h>

//recursive function
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
        return (fib(n-1) + fib(n-2));
    }
}
//driver code
void main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("the %dth fibonacci number is %d.\n",n,fib(n));
}
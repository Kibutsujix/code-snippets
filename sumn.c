// sum of n numbers 
#include<stdio.h>
#include<stdlib.h>

int sum2(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n+sum2(n-1));
    }
}

void main()
{
    int n,res=0;
    printf("enter value of n : ");
    scanf("%d",&n);
    res = sum2(n);
    printf("the sum of 1-%d is %d\n",n,res);
}
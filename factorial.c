//recursion
#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else 
    {
        return fact(n-1)*n;
    }
}
//driver code
void main()
{
    int n,res;
    printf("enter number : ");
    scanf("%d",&n);
    res = fact(n);
    printf("the factorial of %d is %d.\n",n,res);
}
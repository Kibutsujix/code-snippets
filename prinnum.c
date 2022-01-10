//to print first fifty natural numbers using recursion
#include<stdio.h>
#include<stdlib.h>

int print(int n)
{
    if(n == 51)
    {
        exit(0);
    }
    else
        printf("%d\t",n);
        return print(n+1);
}

void main()
{
    int n=1,res;
    res = print(n);
    printf("%d",res);
}
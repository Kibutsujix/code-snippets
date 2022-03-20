//to find the gcd of two numbers

#include<stdio.h>
#include<stdlib.h>

//recursive function
int gcd(int a,int b)
{
    int rem;
    rem = a%b;
    if(rem != 0)
    {
        return gcd(b,rem);
    }
    else
    {
        return b;
    }
}

void main()
{
    int a,b,res;
    printf("enter the two numbers :\n");
    scanf("%d%d",&a,&b);
    res = gcd(a,b);
    printf("the gcd of %d and %d is %d.\n",a,b,res);
}
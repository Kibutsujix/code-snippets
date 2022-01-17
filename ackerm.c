// ackermann's function

#include<stdio.h>
#include<stdlib.h>

long long int A(long long int m,long long int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(m!=0 && n==0)
    {
        return A(m-1,1);
    }
    else if(m!=0 && n!=0)
    {
        return A(m-1,A(m,n-1));
    }
}

//driver code
void main()
{
    long long int m,n,res;
    printf("enter value of (m,n) : ");
    scanf("%lld%lld",&m,&n);
    res = A(m,n);
    printf("A(%lld,%lld) is %lld\n",m,n,res);
}
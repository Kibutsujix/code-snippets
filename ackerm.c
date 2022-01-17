// ackermann's function

#include<stdio.h>
#include<stdlib.h>

int A(int m,int n)
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
    int m,n,res;
    printf("enter value of (m,n) : ");
    scanf("%d%d",&m,&n);
    res = A(m,n);
    printf("A(%d,%d) is %d\n",m,n,res);
}
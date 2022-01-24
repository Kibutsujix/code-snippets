// printing array elements using recursion

#include<stdio.h>
#include<stdlib.h>

#define size 50
int printarr(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
        return (n-printarr(n-1));
}

//driver code

void main()
{
    int arr[size],i,n,res;
    printf("enter number of elements : ");
    scanf("%d",&n);
    
    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[printarr(i)]);
    }
}
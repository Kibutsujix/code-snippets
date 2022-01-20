// fibonacci series, nth fibonacci number, fib series iterative

#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return (fib(n-1) + fib(n-2));
}

void fibser(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",fib(i));
    }
    printf("\n");
}

void fibiter()
{
    int i,n,res,first=0,second=1;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0 || i==1)
        {
            res = i;
        }
        else
        {
            res = first + second;
            first = second;
            second = res;
        }
        printf("%d\t",res);
    }
    printf("\n");

}

//driver code

void main()
{
    int ch,n,res;
    for(;;)
    {
        printf("enter\n1. Nth fibonacci number (recursive)\n2. Fibonacci series (recursive)\n3. Fibonacci series (iterative)\n4. exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
            printf("enter value of n : ");
            scanf("%d",&n);
            res = fib(n);
            printf("the %d th fibonacci number is %d\n",n,res);
            break;
            case 2 :
            printf("enter value of n : ");
            scanf("%d",&n);
            fibser(n);
            break;
            case 3 :
            fibiter();
            break;
            case 4 :
            exit(0);
        }
    }
}

/*
output 
enter
1. Nth fibonacci number (recursive)
2. Fibonacci series (recursive)
3. Fibonacci series (iterative)
4. exit
1
enter value of n : 4
the 4 th fibonacci number is 3
enter
1. Nth fibonacci number (recursive)
2. Fibonacci series (recursive)
3. Fibonacci series (iterative)
4. exit
2
enter value of n : 4
0       1       1       2
enter
1. Nth fibonacci number (recursive)
2. Fibonacci series (recursive)
3. Fibonacci series (iterative)
4. exit
3
enter value of n : 4
0       1       1       2
enter
1. Nth fibonacci number (recursive)
2. Fibonacci series (recursive)
3. Fibonacci series (iterative)
4. exit
4
*/
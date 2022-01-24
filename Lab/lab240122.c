// 24 th january lab
/*
Lab Programs :
1. Factorial
2. Tower of Hanoi
3. Ackermann's Function
*/

#include<stdio.h>
#include<stdlib.h>

// Factorial function

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

void factfun()
{
    int n,res;
    printf("enter number : ");
    scanf("%d",&n);
    res = fact(n);
    printf("The Factorial of %d is %d.\n",n,res);
}


// Tower of Hanoi

void tower_of_hanoi(int n,char src,char dest,char aux)
{
    if(n==0)
    {
        return;
    }
    tower_of_hanoi(n-1,src,aux,dest);
    printf("Move disk %d from rod %c to rod %c.\n",n,src,dest);
    tower_of_hanoi(n-1,aux,dest,src);
}

void hanoi()
{
    int n;
    printf("enter number of disks : ");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','C','B');
}

// Ackermann Function

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

void Acker()
{
    int m,n,res;
    printf("enter values of (m,n) : ");
    scanf("%d%d",&m,&n);
    res = A(m,n);
    printf("A(%d,%d) is %d.\n",m,n,res);
}

// driver code

void main()
{
    int k;
    for(;;)
    {
        printf("Enter\n1. Factorial of N\n2. Tower of Hanoi\n3. Ackermann's Function\n4. Exit\n");
        scanf("%d",&k);
        switch(k)
        {
            case 1 :
            factfun();
            break;
            case 2 :
            hanoi();
            break;
            case 3 :
            Acker();
            break;
            case 4 :
            exit(0);
            default : printf("Enter value from (1-4) only!!.\n");
            break;
        }
    }
}

/*
output
Enter
1. Factorial of N
2. Tower of Hanoi
3. Ackermann's Function
4. Exit
1
enter number : 4
The Factorial of 4 is 24.
Enter
1. Factorial of N
2. Tower of Hanoi
3. Ackermann's Function
4. Exit
2
enter number of disks : 3
Move disk 1 from rod A to rod C.
Move disk 2 from rod A to rod B.
Move disk 1 from rod C to rod B.
Move disk 3 from rod A to rod C.
Move disk 1 from rod B to rod A.
Move disk 2 from rod B to rod C.
Move disk 1 from rod A to rod C.
Enter
1. Factorial of N
2. Tower of Hanoi
3. Ackermann's Function
4. Exit
3
enter values of (m,n) : 3 1
A(3,1) is 13.
Enter
1. Factorial of N
2. Tower of Hanoi
3. Ackermann's Function
4. Exit
4
*/
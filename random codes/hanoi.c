// tower of hanoi

#include<stdio.h>
#include<stdlib.h>

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

// driver code

int main()
{
    int n;
    printf("enter number of disks : ");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','C','B');
    return 0;
}

/*
output : 
enter number of disks : 3
Move disk 1 from rod A to rod C.
Move disk 2 from rod A to rod B.
Move disk 1 from rod C to rod B.
Move disk 3 from rod A to rod C.
Move disk 1 from rod B to rod A.
Move disk 2 from rod B to rod C.
Move disk 1 from rod A to rod C.

*/
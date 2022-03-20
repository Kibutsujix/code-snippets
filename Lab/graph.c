// graph program

#include<stdio.h>
#include<stdlib.h>
#define size 20

void read(int n, int A[][20])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
}

void print(int n,int A[][20])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
}

void undir(int n,int A[][20])
{
    int max = 0,ctr;
    int i,j;
    for(i=0;i<n;i++)
    {
        ctr = 0;
        for(j=0;j<n;j++)
        {
            if(A[i][j]==1)
            {
                ctr++;
            }
        }
    }
    if(ctr>max)
    {
        max = ctr;
    }
    printf("Degree of the graph = %d\n",max);
}

void dir(int n,int A[][20])
{
    int i,node,in=0,out=0;
    printf("enter the node\n");
    scanf("%d",&node);
    for(i=0;i<n;i++)
    {
        if(A[node-1][i] == 1)
        {
            out++;
        }
        else if(A[i][node-1] == 1)
        {
            in++;
        }
    }
        printf("In degree of node-%d is %d\n",node,in);
        printf("Out degree of node-%d is %d\n",node,out);

}

void main()
{
    int A[size][size],n,ch;
    printf("enter number of nodes : ");
    scanf("%d",&n);
    printf("\nenter adjacency matrix\n");
    read(n,A);
    printf("Adjacency matrix is : \n");
    print(n,A);
    for(;;)
    {
        printf("enter\n1. undirected graph\n2. directed graph\n3. exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : undir(n,A);
            break;
            case 2 : dir(n,A);
            break;
            case 3 : exit(0);
            default : printf("enter values from (1-3) only!\n");
            break;
        }
    }
}


/*
undirected graph
output
Adjacency matrix is : 
010101
101010
010100
101011
010101
100110
enter
1. undirected graph
2. directed graph
3. exit
1
Degree of the graph = 3


Directed graph 
output
Adjacency matrix is : 
01101
00110
00010
00001
00000
enter
1. undirected graph
2. directed graph
3. exit
2
enter the node
4
In degree of node-4 is 2
Out degree of node-4 is 1
enter
1. undirected graph
2. directed graph
3. exit
2
enter the node
5
In degree of node-5 is 2
Out degree of node-5 is 0
enter
1. undirected graph
2. directed graph
3. exit
2
enter the node
3
In degree of node-3 is 2
Out degree of node-3 is 1
enter
1. undirected graph
2. directed graph
3. exit
3
*/

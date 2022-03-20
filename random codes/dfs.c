// depth first search 

#include<stdio.h>
#include<stdlib.h>
#define size 20
#define TRUE 1
#define FALSE 0

void read(int n,int A[][20])
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

int vertices[size];

void push(int ele,int *top,int vertices[],int *push_count)
{
    vertices[++(*top)] = ele;
    (*push_count)++;
}

int pop(int *top,int vertices[],int pop_count)
{
    return vertices[(*top)--];
    (*pop_count)++;
}

void dfs(int n,int A[][20])
{
    int push_count = 0,pop_count = 0;
    int start = 1,top = -1;
    printf("dfs with node -1 started\n");
    push(start,&top,vertices,push_count);
    

}
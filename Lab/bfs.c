// bfs traversal

#include<stdio.h>
#include<stdlib.h>

#define size 20

int arr[size],p=0;
int Q[size],f=0,r=0;

void bfs(int n,int Vis[],int AM[][20],int src)
{
    int u,v;
    Vis[src] = 1;
    Q[r] = src;
    while(f<=r)
    {
        u = Q[f++];
        arr[p++] = u;
        for(v=0;v<n;v++)
        {
            if(AM[u][v] == 1 && Vis[v] == 0)
            {
                Q[++r] = v;
                Vis[v] =1;
            }
        }
    }
}

void set(int Vis[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        Vis[i] = 0;
    }
}

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
void main()
{
    int i,Vis[size],n,AM[size][size],src=0;
    printf("Enter number of vertices : ");
    scanf("%d",&n);
    set(Vis,n);
    printf("enter adjacency matrix \n");
    read(n,AM);
    bfs(n,Vis,AM,src);
    for(i=0;i<n;i++)
    {
        if(Vis[i] == 0)
        {
            printf("%d has not been visited \n",i);
            src = i;
            r=f;
            bfs(n,Vis,AM,src);
        }
        else
        {
            printf("%d has been reached \n",i);
        }
    }
    // traversal of the bfs
    printf("the traversal order is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d-->",arr[i]);
    }
    printf("\n");
}
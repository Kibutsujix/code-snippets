// adjacency matrix 

#include<stdio.h>
#define MAX 10

int N,M;
void create_adj_matrix(int Adj[][N+1],int arr[][2])
{
    int i,j;
    for(i=0;i<N+1;i++)
    {
        for(j=0;j<N+1;j++)
        {
            Adj[i][j] = 0;
        }
    }

    for(i=0;i<M;i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];

        Adj[x][y] = 1;
        Adj[y][x] = 1;
    }
}

void print_adj_mat(int Adj[MAX][N+1])
{
    int i,j;
    for(int i =1;i<N+1;i++)
    {
        for(int j=1;j<N+1;j++)
        {
            printf("%d ",Adj[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    N=5;
    int Adj[N+1][N+1];

    int arr[][2] = {{1,2},{2,3},{4,5},{1,5}};
    M = sizeof(arr) / sizeof(arr[0]);
    create_adj_matrix(Adj,arr);
    print_adj_mat(Adj);
    return 0;
}
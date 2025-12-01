#include<stdio.h>

int main()
{
    int N, M;
    scanf("%d%d",&N,&M);
    int matrix[N][M];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //last row print
    for(int i = 0; i < M; i++)
    {

        printf("%d ",matrix[N-1][i]);
       
    }
    
    printf("\n");

    for(int i = 0; i < N; i++)
    {
        printf("%d ",matrix[i][M-1]);
       
    }
     
    return 0;
}
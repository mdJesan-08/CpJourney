#include<stdio.h>

void print2DArray(int r ,int c, int arr[r][c])
{

    for(int i = 0; i < 2; i++)
    {
        for(int k = 0; k < c; k++)
        {
            printf("%d ",arr[i][k]);
        }
        printf("\n");
    }

}
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i = 0; i < 2; i++)
    {
        for(int k = 0; k < c; k++)
        {
            scanf("%d",&arr[i][k]);
        }
    }

    print2DArray(r, c, arr);

    return 0;
}
#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    char curr_char[2] = {'#', '-'};
    int ptr = 0;


    for(int i = 0; i < N; i++)
    {
        //for printing gaps
        for(int k = i; k < N -1; k++ )
        {
            printf(" ");
        }

        for(int j = 1 ; j <= 2*i +1; j++)
        {
            printf("%c", curr_char[ptr]);
        }
        printf("\n");
        ptr = !ptr;

    }


    for(int i = N-2; i >= 0; i--)
    {
        //for printing gaps
        for(int k = i; k < N -1; k++ )
        {
            printf(" ");
        }

        for(int j = 1 ; j <= 2*i +1; j++)
        {
            printf("%c", curr_char[ptr]);
        }
        printf("\n");
        ptr = !ptr;
    }
}
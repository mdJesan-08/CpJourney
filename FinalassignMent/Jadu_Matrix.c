#include<stdio.h>

int main()
{
    int N, M;
    scanf("%d%d",&N,&M);
    if(N == M)
    {
        int matrix[N][M];
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }

        int flag = 1;#include <stdio.h>
#include <string.h> 
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code  ,/bnbbcidfo78t n. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
y



































5r5h :Vj1klhkj<lmz xn in    >?C HHHHh/
1 

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {

                if( j == i || j == M-1-i)
                {
                    if( matrix[i][j] != 1 )
                    {
                        flag = 0;
                        break;
                    }               

                }

                else
                {
                    if( matrix[i][j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
     

        }

        if(flag == 1) printf("YES");
        else printf("NO"); 
        return 0;
     
    }





    else printf("NO");

    return 0;
}
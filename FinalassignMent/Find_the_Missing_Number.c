#include<stdio.h>

int main()
{
    int cnt = 0;
    int T;
    scanf("%d",&T);

    while (cnt < T)
    {           
        unsigned long long int M, A, B, C;
        scanf("%llu %llu %llu %llu",&M,&A,&B,&C);
        if(M == 0)
        {
          printf("0");             
        }
        else
        {

        unsigned long long int quotient = ((M/A)/B)/C;
        // printf("q is %d ",(((((M/A)*A)/B)*B)/C)*C);

        unsigned long long int product = 1;
        product = product*A;
        product = product*B;
        product = product*C;


        if( M % product == 0) printf("%d",quotient);
        else printf("-1");
        printf("\n");        

        }
        cnt++;
    }
    

}
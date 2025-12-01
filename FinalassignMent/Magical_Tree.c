#include<stdio.h>

void tree_pattern(int n)
{
    int base_height = 6;
    int limit = n / 2 + base_height;
    for (int i = 1; i <= limit ; i++)
    {


        for(int k = 0; k < limit -i; k++) printf(" ");
        for(int j = 0; j < 2*i -1; j++)
        {
            printf("*");
        }
        printf("\n");
    }



    // building pattern
    int buildig_height = 5;
   
    for(int i = 0; i < buildig_height; i++)
    {
        for(int k = 0; k < limit-n/2-1; k++) printf(" ");
        for(int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}



int main()
{

    int n;
    scanf("%d",&n);
    tree_pattern(n);
    
    return 0;


}
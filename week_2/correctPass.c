#include <stdio.h>

int main()
{
    int correctPass = 1999;
    int temPass;
    while(1)
    {
        scanf("%d",&temPass);
        if(temPass == correctPass)
        {
            printf("Correct\n");
            break;
        }
        else printf("Wrong\n");
    }

    return 0;
}
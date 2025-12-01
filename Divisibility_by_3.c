#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    char number[1000001]; 
    scanf("%s", number);

    int sum = 0;
    for (int i = 0; i < N; i++) 
    {
        sum += number[i] - '0';
    }

    if (sum % 3 == 0) printf("YES");
    else printf("NO");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int start, end;
    char temp1[5000], temp2[5000];
    
    scanf("%s", temp1);
    scanf("%s", temp2);
    scanf("%d %d", &start, &end);

    int len1 = strlen(temp1);
    int len2 = end - start + 1;
    char *str1 = (char *)malloc(len1 + len2 + 1);
    strcpy(str1, temp1);
    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = temp2[start + i];
    }
    str1[len1 + len2] = '\0';

    printf("%s\n", str1);

    free(str1);
    return 0;
}


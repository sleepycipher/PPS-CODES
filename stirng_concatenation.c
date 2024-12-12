#include <stdio.h>
#include <string.h>
int main(){
    char str1[50], str2[50];

    printf("Enter String1: ");
    scanf("%s", str1);

    printf("Enter String2: ");
    scanf("%s", str2);

    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    return 0;
}
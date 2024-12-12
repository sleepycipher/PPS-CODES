#include <stdio.h>
#include <string.h>
int main(){
    char str1[50];

    printf("Enter String1: ");
    scanf("%s", str1);

    int length = strlen(str1);
    printf("Length of String: %s\n", length);
    return 0;
}
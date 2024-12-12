#include <stdio.h>
#include <string.h>
int main(){
    char str1[50], target_str[50];

    printf("Enter String1: ");
    scanf("%s", str1);

    strcpy(target_str, str1);

    printf("Copied String: %s\n", target_str);
    return 0;
}
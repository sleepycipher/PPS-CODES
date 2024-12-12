#include <stdio.h>
#include <string.h>
int main(){
    char str1[50], str2[50];

    printf("Enter String1: ");
    scanf("%s", str1);

    printf("Enter String2: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);
    if (result == 0)
    {
        printf("Strings Equal\n");
    } 
    else if (result>0)
    {
        printf("String 1\n");
    } 
    else
    {
        printf("String 2\n");
    }

    return 0;
}
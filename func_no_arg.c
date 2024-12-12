#include <stdio.h>
int number(){
    int temp;
    printf("Enter the Number: ");
    scanf("%d", &temp);
    return temp;
}

int main(){
    int result = number();
    printf("Number is: %d", result);
    return;
}
#include<stdio.h>
int main(){
    int a, b, temp;
    
    printf("Enter the Values for (a), (b)\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swap a = %d and b = %d", a, b);

    return 0;
}
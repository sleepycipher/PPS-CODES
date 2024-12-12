#include <stdio.h>
int multiply(int a, int b){
    return a*b;
}

int main(){
    int num1 = 4, num2 = 7;
    int result = multiply(num1, num2);
    printf("The product is: %d", result);
    return 0;
}
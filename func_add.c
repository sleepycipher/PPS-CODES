#include <stdio.h>
void addnumbers(int a, int b){
    int sum = a+b;
    printf("Sum is: %d", sum);
}
int main(){
    int num1 = 5, num2 = 10;
    addnumbers(num1, num2);
    return 0;
}
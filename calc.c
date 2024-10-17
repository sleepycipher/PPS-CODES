#include <stdio.h>
int main(){
    int a, b, choice, result;

    printf("enter 2 numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Choose: \n1. Multiply \n2. Add \n3. Sub \n4. Div\n");
    scanf("%d", &choice);
    
    if (choice == 1)
    {
        result = a * b;
        printf("a*b = %d", result);
    }
    else if (choice == 2)
    {
        result = a + b;
        printf("a+b = %d", result);
    }
    else if (choice == 3)
    {
        result = a - b;
        printf("a-b = %d", result);
    }
    else
    {
        result = a/b;
        printf("a/b = %d", result);
    }

    return 0;
}
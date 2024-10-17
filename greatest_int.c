#include<stdio.h>
int main(){
    int x, y, a, b;

    printf("Enter the value for x: ");
    scanf("%d", &x);

    printf("Enter the value for y: ");
    scanf("%d", &y);

    printf("Enter the value for a: ");
    scanf("%d", &a);

    printf("Enter the value for b: ");
    scanf("%d", &b);

    if (x>y && x>a && x>b)
    {
        printf("x is the greatest");
    }
    else if (y>x && y>a && y>b)
    {
        printf("y is the greatest");
    }
    else if (a>x && a>y && a>b)
    {
        printf("a is the greatest");
    }
    else if (b>x && b>a && b>y)
    {
        printf("b is the greatest");
    }
    
    return 0;
}
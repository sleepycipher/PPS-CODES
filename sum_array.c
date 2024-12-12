#include <stdio.h>
int main (){
    int arr[] = {5,10,15,20};
    int sum = 0;

    for (int i = 0; i < 4; i++){
        sum+= arr[i];
    }
    printf("The sum is: %d", sum);

    return 0;
}
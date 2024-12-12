#include <stdio.h>
int sumarray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int total = sumarray(numbers, size);
    printf("The sum of elementsis: %d", total);
    return 0;
}
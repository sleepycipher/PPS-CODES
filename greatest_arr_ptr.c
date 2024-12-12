#include <stdio.h>
int main(){
    int arr[100], n;
    int *ptr;
    int largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    largest = *ptr;

    for (int i = 1; i < n; i++){
        ptr++;
        if(*ptr > largest){
            largest = *ptr;
        }
    }
    printf("The largest element is:%d\n", largest);

    return 0;
}
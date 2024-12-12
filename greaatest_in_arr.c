#include <stdio.h>
int main(){
    int arr[] = {5, 10 , 15, 20};
    int max = arr[0];

    for(int i = 1; i <4; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("Max is: %d", max);
    return 0;
}
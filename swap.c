#include <stdio.h>

void main(){
    int length;
    printf("enter length of the array: ");
    scanf("%d", &length);
    int arr[length];
    int sum = 0;
    printf("enter %d elements: ", length);
    for(int i = 0; i <  length; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<length; i++){
        printf("%d ", arr[i]);
    }
    for(int i = 0; i <= length/2; i++){
        int temp = arr[i] + arr[length-1- i];
        arr[i] = temp - arr[length-1- i];
        arr[length-1- i] = temp;
    }
    for(int i = 0; i<length; i++){
        printf("%d",arr[i]);
    }
}
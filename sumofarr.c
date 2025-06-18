#include <stdio.h>

void main(){
    int length;
    printf("enter length of the array: ");
    scanf("%d", &length);
    int arr[length];
    int sum = 0;
    printf("enter %d elements", length);
    for(int i = 0; i <  length; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<length; i++){
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\nsum is %d", sum);
}
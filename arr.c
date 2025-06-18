#include <stdio.h>

int main(){
    int length = 0;
    printf("enter length of array: ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter %d numbers\n", length);
    for(int i = 0; i < length;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}
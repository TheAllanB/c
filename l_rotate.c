#include <stdio.h>
void main(){
    int len = 0;
    printf("Enter size of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("enter %d elements: ", len);
    for(int k = 0; k<len; k++){
        scanf("%d", &arr[k]);
    }
    int temp = arr[0];
    for(int i = 1; i < len; i++){
        arr[i-1] = arr[i];
    }
    arr[len - 1] = temp;
    for(int j = 0; j < len; j++){
        printf("%d ", arr[j]);
    }
}
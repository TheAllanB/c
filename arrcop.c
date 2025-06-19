#include <stdio.h>

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int rev[len];
    int j = 0;
    for(int i = len - 1; i > 0; i--){
        rev[j] = arr[i];
        j++;
    }
    for(int k = 0; k < len; k++){
        printf("%d", rev[k]);
    }
}
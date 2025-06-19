#include <stdio.h>

void main(){
    int len = 0;
    printf("enter length of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("enter %d elements: ", len);
    for(int i = 0; i < len; i++){
        scanf("%d", &arr[i]);
    }
    int d = 0;
    printf("enter no of pos to be shifted: ");
    scanf("%d", &d);
    int temp[d];
    for(int j = 0; j<d; j++){
        temp[j] = arr[j];
    }
    for(int k = d; k<len;k++){
        arr[k-d] = arr[k];
    }
    int l = 0;
    for(int i = len - d; i < len; i++){
        arr[i] = temp[l];
        l++;
    }
    printf("array: \n");
    for(int i = 0; i< len; i++){
        printf("%d ",arr[i]);
    }
}
#include <stdio.h>
void main(){
    int len = 0;
    printf("enter size of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("enter %d elements", len);
    for(int i=0;i<len;i++){
        scanf("%d", &arr[i]);
    }
    int sum =0;
    for(int j = 0; j< len; j+=2){
        sum = sum +arr[j];
    }
    printf("sum of even indexes is %d", sum);
}
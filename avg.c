#include <stdio.h>

void main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int count = 0, sum =0;
    for(int i = 0; i<len; i++){
        sum = sum + arr[i];
        count++;
    }
    int avg = sum / count;
    printf("average is %d ", avg);
}
#include <stdio.h>

void main(){
    int arr[] = {1,43,12,100,200,5};
    int max = arr[0];
    for(int i; i < 6; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d", max);
}
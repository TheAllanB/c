#include <stdio.h>

void main(){
    int arr[] = {10,43,12,100,200,5};
    int min = arr[0];
    for(int i; i < 6; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d", min);
}
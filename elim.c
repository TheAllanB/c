#include <stdio.h>

void main(){
    int arr[] = {1,2,2,3,2,1,3,5,7,4,6,8};
    int length = sizeof(arr) / sizeof(arr[0]);
    int dup[10];
    for(int i=0 ;i <length; i++){
        int isDup ,unique= 0;
        for(int j= 0; j<unique, j++){
            if(arr[i] == dup[j]){
                isDup = 1;
                break;
            }
        }
        if(!isDup)
    }
}
#include <stdio.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    
    int arr[n+1];

    for(int i = 0; i <= n; i++){
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;
    for(int i = 2; i*i <= n;i++){
        if(arr[i] == 1){
            for(int j = i*i; j <= n; j = j+i){
                arr[j] = 0;
            }
        }
    }
    for(int i = 0; i <= n; i++){
        if(arr[i]==1){
            printf("%d ,", i);
        }
    }
}
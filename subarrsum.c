#include <stdio.h>

void main(){
    int arr[] = {1,2,3,4,2,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int num = 4;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum = 0;
            for (int k = i;k< j;k++){
                sum = sum + arr[k];
                if(sum == num){
                    count++;
            }
            }
            
        }
    }
    printf("count = %d",count);
}
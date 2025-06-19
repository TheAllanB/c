#include <stdio.h>

void main(){
    int arr[6] = {1,2,3,4,5,6};
    int oddcount=0;
    int evencount = 0;
    for(int i=0; i<6; i++){
        if(arr[i]%2 ==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d ",oddcount);
    printf("%d ",evencount);
}
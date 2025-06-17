#include <stdio.h>

int main(){
    int num = 0;
    printf("enter a number ");
    scanf("%d", &num);
    int i = 1;
    while(i*i <=num){
        if(i*i == num){
            printf("perfect square");   
        }
        i++;
    }
} 
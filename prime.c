#include <stdio.h>

int main(){
    int i, count = 0, n = 2;
    printf("enter a number ");
    scanf("%d", &i);

    while(n <= i/2){
        if(n % i == 0 ){
            count++;
        }
        n++;
        printf("%d",count);
        printf("%d",n);
    }
    if(n == 2){
        printf("%d is a prime number",i);
    }
    else{
        printf("%d is not a prime number", i);
    }
}
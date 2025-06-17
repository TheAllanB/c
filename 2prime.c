#include <stdio.h>
int main(){
    int n, isPrime = 0;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i = 2;i <= n/2; i++){
        if(n % i == 0){
            isPrime++;
        }
    }
    if(isPrime == 0){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }
}
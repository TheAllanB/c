#include <stdio.h>
int main(){
    int isPrime = 0,n;
    printf("enter a number: ");
    scanf("%d", &n);
    
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isPrime++;
        }
    }
    if(isPrime == 0){
        printf("%d is a prime number ", n);
    }
    else{
        printf("%d is not a prime number", n);
    }
}
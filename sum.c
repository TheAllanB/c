#include <stdio.h>

int main(){
    int sum = 0,og, n;
    printf("enter a number: ");
    scanf("%d", &n);
    og = n;
    while(n != 0){
        int digit = n%10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("%d", sum);
}
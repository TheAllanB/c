#include <stdio.h>

int main(){
    int n1 = 0;
    int n2 = 1;
    int count, n, n3;
    printf("enter the no of terms: ");
    scanf("%d", &n);
    while(count <= n){
        printf("%d", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        count++;
    }
}
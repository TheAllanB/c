#include <stdio.h>
#include <math.h>

int main(){
    float num, result;

    printf("enter a number ");
    scanf("%f", &num);

    result = sqrt(num);

    printf("%f", result);

    return 0;

}
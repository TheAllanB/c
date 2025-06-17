#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int num) {
    if (num < 0) return 0;
    
    int original = num, sum = 0, digits = 0, temp = num;

    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += power(remainder, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
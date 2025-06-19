#include <stdio.h>

void main() {
    int arr[] = {1,1,1,1,1,-1,1,1,1,1,1,-1,1,1,2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < len; i++) {
        if (currentSum < 0)
            currentSum = arr[i];
        else
            currentSum += arr[i];

        if (currentSum > max)
            max = currentSum;
    }

    printf("Max subarray sum = %d\n", max);
}
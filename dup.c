#include <stdio.h>

int main() {
    int arr[] = {5, 2, 8, 5, 2, 9, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique[size];
    int i, j, isDuplicate, uniqueCount = 0;

    printf("Original Array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    for(i = 0; i < size; i++) {
        isDuplicate = 0;
        printf("Checking arr[%d] = %d\n", i, arr[i]);

        for(j = 0; j < uniqueCount; j++) {
            printf("  Comparing with unique[%d] = %d\n", j, unique[j]);
            if(arr[i] == unique[j]) {
                isDuplicate = 1;
                printf("  --> Duplicate found! Skipping %d\n", arr[i]);
                break;
            }
        }

        if(!isDuplicate) {
            unique[uniqueCount] = arr[i];
            printf("  --> Unique! Adding %d to unique[%d]\n", arr[i], uniqueCount);
            uniqueCount++;
        }
        printf("\n");
    }

    printf("Final unique array: ");
    for(i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
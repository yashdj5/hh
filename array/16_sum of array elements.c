#include <stdio.h>
int main() {
    int arr[5], sum = 0, i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum of the array: %d\n", sum);

    return 0;
}


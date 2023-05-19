#include <stdio.h>

int findMax(int* arr, int size) {
    int max = *arr;  // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int* ptr = arr;
    int max = findMax(ptr, size);

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}

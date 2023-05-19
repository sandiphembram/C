#include <stdio.h>

void findCommonElements(int arr1[], int size1, int arr2[], int size2, int common[], int *commonSize) {
    int i, j;
    *commonSize = 0;

    // Iterate through each element of arr1
    for (i = 0; i < size1; i++) {
        // Check if the element exists in arr2
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Add the common element to the common array
                common[*commonSize] = arr1[i];
                (*commonSize)++;
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 4, 5, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int common[size1 < size2 ? size1 : size2];
    int commonSize;

    findCommonElements(arr1, size1, arr2, size2, common, &commonSize);

    printf("Common elements: ");
    for (int i = 0; i < commonSize; i++) {
        printf("%d ", common[i]);
    }

    return 0;
}

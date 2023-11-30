#include <stdio.h>
#include <time.h>
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int n, target;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target number to search: ");
    scanf("%d", &target);

    clock_t start_time = clock();

    int result = binarySearch(arr, n, target);

    clock_t end_time = clock();

    double time_taken = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    if (result != -1) {
        printf("Target found at index: %d\n", result);
    } else {
        printf("Target not found in the array\n");
    }

    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[3][4]; 
    int rows = 3, cols = 4;
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = ++count;  
        }
    }
    printf("Array elements (Row-Major Order):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nMemory Address Comparison (Row-Major Order):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int *actual_address = &arr[i][j];
            int base_address = (int)&arr[0][0];  
            int calculated_address = base_address + (i * cols + j) * sizeof(int);
            printf("Element arr[%d][%d]: Value = %d, Actual Address = %p, Calculated Address = %p\n", 
                   i, j, arr[i][j], (void*)actual_address, (void*)calculated_address);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

extern int sum(int *arr, int n);

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("Usage: ./lab4 filename\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int n;

    // First line = number of integers
    fscanf(fp, "%d", &n);

    // Allocate memory dynamically
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        fclose(fp);
        return 1;
    }

    // Read integers into array
    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    fclose(fp);

    // Call assembly function
    int result = sum(arr, n);

    printf("Sum = %d\n", result);

    free(arr);

    return 0;
}
#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation functions

void printTable(int *mulTable, int num, int n) {
    printf("\nMultiplication Table of %d:\n", num);
    for (int i = 0; i < n; i++) {
        mulTable[i] = num * (i + 1);
        printf("%d x %d = %d\n", num, i + 1, mulTable[i]);
    }
}

int main() {
    int m;
    printf("Enter Number of Numbers for MulTable:\n");
    scanf("%d", &m);

    int *Stack = (int *)malloc(m * sizeof(int)); // Allocate memory using malloc

    for (int j = 0; j < m; j++) {
        printf("Enter Number no %d:", j + 1);
        scanf("%d", &Stack[j]);
    }

    int **mulTable = (int **)malloc(m * sizeof(int *)); // Allocate memory for an array of int pointers

    for (int i = 0; i < m; i++) {
        mulTable[i] = (int *)malloc(10 * sizeof(int)); // Allocate memory for each multiplication table
        printTable(mulTable[i], Stack[i], 10);
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < m; i++) {
        free(mulTable[i]);
    }
    free(mulTable);
    free(Stack);

    return 0;
}

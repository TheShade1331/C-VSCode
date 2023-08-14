#include <stdio.h>
#include <stdlib.h> // Include the necessary header for dynamic memory allocation

void display(int **B, int a, int b);

int main()
{
    int a, b;
    printf("Enter the Number of rows in Array:");
    scanf("%d", &a);
    printf("Enter the Number of Columns in Array:");
    scanf("%d", &b);

    int **A = (int **)malloc(a * sizeof(int *));
    for (int i = 0; i < a; i++)
    {
        A[i] = (int *)malloc(b * sizeof(int));
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the (%d,%d) Element: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    display(A, a, b);

    // Free the allocated memory
    for (int i = 0; i < a; i++)
    {
        free(A[i]);
    }
    free(A);

    return 0;
}

void display(int **B, int a, int b)
{
    printf("{");
    for (int i = 0; i < a; i++)
    {
        if (i > 0)
            printf(",");
        
        printf("{");
        for (int j = 0; j < b; j++)
        {
            if (j > 0)
                printf(",");
            
            printf("%d", B[i][j]);
        }
        printf("}");
    }
    printf("}\n");
}
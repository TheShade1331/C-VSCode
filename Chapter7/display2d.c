#include <stdio.h>
#define MAX_ROWS 100   // Define an appropriate maximum number of rows
#define MAX_COLUMNS 100 // Define an appropriate maximum number of columns
void display(int B[MAX_ROWS][MAX_COLUMNS], int a, int b);

int main()
{
    int a, b;
    printf("Enter the Number of rows in Array:");
    scanf("%d", &a);
    printf("Enter the Number of Columns in Array:");
    scanf("%d", &b);

    if (a > MAX_ROWS || b > MAX_COLUMNS) {
        printf("Input dimensions exceed the maximum allowed size.\n");
        return 1;
    }

    int A[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the (%d,%d) Element: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    display(A, a, b);
    return 0;
}

void display(int B[MAX_ROWS][MAX_COLUMNS], int a, int b)
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

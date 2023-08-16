#include<stdio.h>
#include<string.h>

void Slice(char *A, int m, int n, char *B); // Fixed the function declaration

int main()
{
    char *ptr = "Engineering";
    char C[20];
    Slice(ptr, 0, 4, C);
    printf("The Sliced String is %s", C);
    return 0;
}

void Slice(char *A, int m, int n, char *B)
{
    int a = 0;
    for (int i = m; i < n; i++)
    {
        B[a] = A[i];
        a++;
    }
    B[a] = '\0'; // Terminate the string
}
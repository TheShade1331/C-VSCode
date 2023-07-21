#include<stdio.h>
int main()
{
    int i = 3;
    int *j = &i;
    int **k = &j;
    printf("The Value of i is %d", **k);
    return 0;
}
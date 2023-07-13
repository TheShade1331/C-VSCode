#include<stdio.h>
int main()
{
    int a;
    printf("Enter a\n");
    scanf("%d", &a);

    (a<5)? printf("A is Less than 5"): printf("A is Not Less than 5");
    return 0;
}
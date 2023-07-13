#include<stdio.h>
int Area(int a);
int main()
{
    int a;
    printf("Enter the Side Length\n");
    scanf("%d", &a);
    Area(a);
    return 0;
}
int Area(int a)
{
    int Area = a*a;
    printf("Area of the Square is %d\n", Area);
}
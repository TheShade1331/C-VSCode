#include<stdio.h>
int main()
{
    int r;
    printf("Enter radius of given circle:");
    scanf("%d", &r);
    float A = 3.14*r*r;
    printf("Area of Given Circle is:%f",A);
    return 0;
}
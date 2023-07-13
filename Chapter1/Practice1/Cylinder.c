#include<stdio.h>
int main()
{
    int r,h;
    printf("Enter Radius of given cylinder:");
    scanf("%d", &r);
    printf("Enter Height of given cylinder:");
    scanf("%d", &h);
    float V = 3.14*r*r*h;
    printf("Volume of Given Cylinder is:%f",V);
    return 0;
}
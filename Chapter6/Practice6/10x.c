#include<stdio.h>
int tenx(int *a);
int main()
{
    int x=4;
    tenx(&x);
    return 0;
}
int tenx(int *a)
{
    int tenx = *a*10;
    printf("The Value of x Tenfold is %d", tenx);
    return 0;
}
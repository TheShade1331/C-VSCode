#include<stdio.h>
int main()
{
    int n = 0,a;
    printf("Enter A:\n");
    scanf("%d",&a);
    do
    {
        printf("%d\n",n+1);
        n++;
    } while (n<a);
    

    return 0;
}
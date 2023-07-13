#include<stdio.h>
int main()
{
    int a;
    printf("Enter a:\n");
    scanf("%d",&a);
    for(int n=a; n ; n--)
    {
        printf("%d\n",n);
    }
    return 0;
}
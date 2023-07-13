#include<stdio.h>
int main()
{
    int n=0,a;
    printf("Enter a:\n");
    scanf("%d",&a);
    for(n=0 ; n<a ; n++)
    {
        printf("%d\n",n+1);
    }
    return 0;
}
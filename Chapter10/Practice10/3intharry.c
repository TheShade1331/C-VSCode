#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("prf1.txt","r");
    int a,b,c;
    fscanf(ptr,"%d %d %d", &a, &b, &c);
    printf("The Three Integers are %d %d %d",a,b,c);
    fclose(ptr);
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *ptr;
    int a;
    ptr = fopen("prf5.txt","r");
    fscanf(ptr,"%d", &a);
    fclose(ptr);

    ptr = fopen("prf5.txt","w"); 
    fprintf(ptr,"%d", a*2);
    return 0;
}
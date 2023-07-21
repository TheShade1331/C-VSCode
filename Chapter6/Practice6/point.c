#include<stdio.h>
int main()
{
    int i=1;
    int *j = &i;
    int **k = &j;
    printf("The Address of %d is %u\n",i,j);
    printf("The Value of %d is %u\n",i,*j);
    return 0;
}
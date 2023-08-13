#include<stdio.h>
int main()
{
    int mulTable[3][10];
    printf("Multiplication Table of 2:\n");
    for(int i=0; i<10; i++)
    {
        mulTable[0][i]= 2*(i+1);
        printf("2 x %d = %d\n",i+1, mulTable[0][i]);
    }

        printf("Multiplication Table of 7:\n");
    for(int i=0; i<10; i++)
    {
        mulTable[0][i]= 7*(i+1);
        printf("7 x %d = %d\n",i+1, mulTable[0][i]);
    }

        printf("Multiplication Table of 9:\n");
    for(int i=0; i<10; i++)
    {
        mulTable[0][i]= 9*(i+1);
        printf("9 x %d = %d\n",i+1, mulTable[0][i]);
    }
    return 0;
}
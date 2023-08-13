#include<stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("\nMultiplication Table of %d:\n",num);
    for(int i=0; i<n; i++)
    {
        mulTable[i]= num*(i+1);
        printf("%d x %d = %d\n",num ,i+1,mulTable[i]);
    }
}
int main()
{
    int mulTable[3][10];
    printTable(mulTable[0],2,10);
    printTable(mulTable[1],7,10);
    printTable(mulTable[2],9,10);
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *fptr;
    int number = 45;
    fptr = fopen("Generated.txt","w");
    fprintf(fptr, "The Number is %d\n",number);
    fprintf(fptr, "Thanks For Using fprintf");
    fclose(fptr);
    return 0;
}
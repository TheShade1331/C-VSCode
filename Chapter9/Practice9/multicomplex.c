#include<stdio.h>
typedef struct Complex_Numbers{
    float real;
    float imaginary;
}CN;
int ComplexInitiation(CN*Number);
void display (CN *Number);
int main()
{
    CN Numbers[5];
    for(int i=0; i<5; i++){
        printf("Complex Number: %d\n",i+1);
        ComplexInitiation(&Numbers[i]);
        printf("\n");
    }
    for(int j=0; j<5; j++){
        printf("\nComplex Number %d",j+1);
        display(&Numbers[j]);
    }
    return 0;
}
int ComplexInitiation(CN*Number)
{
    printf("Real Part:\n");
    scanf("%f", &(Number->real));
    printf("Imaginary Part :\n");
    scanf("%f", &(Number->imaginary));
}
void display (CN *Number)
{
    printf(" is %.2f + (%.2f)i",Number->real,Number->imaginary);
}
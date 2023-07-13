#include<stdio.h>
int main()
{
    float tax=0, income;
    printf("Enter Your Income\n");
    scanf("%f", &income);

    if(income<=250000)
    {
        printf("No Income Tax Applicable\n");    // Slot 1: Income Below 2.5 Lacs
    }
    
    if(income>=250000 && income<=500000)
    {                                               //Slot 2: Income between 2.5 & 5 lacs
       tax= tax + 0.05*(income-250000);             //No Tax on /income till 2.5 lacs
    }                                               //Hence we Substract income from 2.5 lacs & then apply

    if(income>=500000 && income<=1000000)
    {
       tax= tax + 0.2*(income-500000);
    }

    if(income>1000000)
    {
       tax= tax + 0.3*(income-1000000);
    }

printf("Net Tax Applicable is %f", tax);
    return 0;
}
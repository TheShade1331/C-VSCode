//To Calculate income Tax of an Employee, based on his income slot
//Fully Done by ME!!
// Because he didn't mention that we have to deduct least slot amt from income & then calculate tax on it..
// code is not Correct :(
#include<stdio.h>
int main()
{
    int rating;
    float income;
    printf("Enter Your Income:\n");
    scanf("%f", &income);

    if(income>1000000)
    rating=1;
    else if(income<=1000000 && income>500000)
    rating=2;
    else if(income<=500000 && income>250000)
    rating=3;

    switch(rating)
    {
        case 1:
          printf("Income Tax Applicable is %f",income*0.3);
          break;
        case 2:
          printf("Income Tax Applicable is %f",income*0.2);
          break;
        case 3:
          printf("Income Tax Applicable is %f",income*0.05);
          break;
        default:
          printf("No Income Tax is Applicable");
          break;
    }
    return 0;
}
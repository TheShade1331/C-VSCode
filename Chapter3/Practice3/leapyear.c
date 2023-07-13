//Lack of Understanding of the Conditions // Very Close though!!
#include <stdio.h>
int main()
{
    int year;
    printf("Enter Year:\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 != 0)
        {
            printf("Year IS a Leap Year");
        }
        if (year % 400 == 0)
        {
            printf("Year is NOT a Leap Year");
        }
    printf("Year IS a Leap Year");
    }
    else
    {
        printf("Year is NOT a Leap Year");
    }
    return 0;
}
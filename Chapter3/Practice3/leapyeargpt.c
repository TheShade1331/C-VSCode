#include <stdio.h>

int main()
{
    int year;
    printf("Enter Year:\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Year is a Leap Year\n");
            }
            else
            {
                printf("Year is NOT a Leap Year\n");
            }
        }
        else
        {
            printf("Year is a Leap Year\n");
        }
    }
    else
    {
        printf("Year is NOT a Leap Year\n");
    }

    return 0;
}

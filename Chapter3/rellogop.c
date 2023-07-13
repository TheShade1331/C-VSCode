#include <stdio.h>
int main()
{
    int age;
    int VIP = 0;
    // VIP=1;
    printf("Enter your Age:\n");
    scanf("%d", &age);
    if ((age >= 18 && age <= 70)|| VIP==1)
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}
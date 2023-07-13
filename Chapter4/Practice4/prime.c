// This Program is Done FULLY BY ME!!!!
#include<stdio.h>
int main()
{
    int s;
    printf("Enter the Number\n");
    scanf("%d", &s);
    for(int i = 2; i < s; i++)
    {
        if(s%i == 0)
        {
            printf("The Number is Not Prime");
            break;
        }
        if (i==s-1)
        {
            printf("%d is a Prime Number", s);

        }
    }
    return 0;
}
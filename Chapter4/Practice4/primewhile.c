// This Program is Done FULLY BY ME!!!!
#include<stdio.h>
int main()
{
    int s;
    int i = 1;
    printf("Enter the Number\n");
    scanf("%d", &s);
    while( i < s)
    {
        i++;
        if(s%i == 0)
        {
            printf("The Number is Not Prime");
            break;
        }
        if (i==s-1)
        {
            printf("%d is a Prime Number", s);
            break;

        }
    }
    return 0;
}
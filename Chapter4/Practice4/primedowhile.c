#include<stdio.h>
int main()
{
     int s;
     int i = 1;
    printf("Enter the Number\n");
    scanf("%d", &s);
    do
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
    } while (i < s);
    
    return 0;
}
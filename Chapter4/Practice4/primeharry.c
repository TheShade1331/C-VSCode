// Disclaimer: This is not the Best Method to Solve this Problem
#include<stdio.h>
int main()
{
    int n, prime = 1; 
    printf("Enter the Number\n");
    scanf("%d", &n);
    for(int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime = 0;
            break;
        }
    }
    if (prime==0)
    {
      printf("This is Not a Prime Number");
    }
    else
    {
      printf("This is a Prime Number");
    }
   
    return 0;
}
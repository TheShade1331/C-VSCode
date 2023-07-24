#include<stdio.h>
int main()
{
    int marks[5]; //allocate Space for 4 integers
    for(int i=0 ; i<5 ; i++)
    {
       printf("Enter the Value of Marks for Student %d:\n", i+1);
       scanf("%d", &marks[i]);
    }

    for(int i=0 ; i<5 ; i++)
    {
       printf("The Value of Marks for Student %d is: %d\n", i+1,marks[i]);
    }
}
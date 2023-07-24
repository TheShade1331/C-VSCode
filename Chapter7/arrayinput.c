#include<stdio.h>
int main()
{
    int marks[4]; //allocate Space for 4 integers
    printf("Enter the Value of Marks for Student 1:\n");
    scanf("%d", &marks[0]);
    printf("Enter the Value of Marks for Student 2:\n");
    scanf("%d", &marks[1]);
    printf("Enter the Value of Marks for Student 3:\n");
    scanf("%d", &marks[2]);
    printf("Enter the Value of Marks for Student 4:\n");
    scanf("%d", &marks[3]);

    printf("You Have Entered %d, %d, %d & %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}
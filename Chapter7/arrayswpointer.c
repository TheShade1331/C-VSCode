#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    // ptr = &marks[0];
    ptr = marks;            //Can Also be Written as Just Array Name
    for(int i=0; i<4; i++)
    {
        printf("Enter the Marks of Student No: %d\n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int i = 0; i<4; i++)
    {
        printf("The Marks of Student %d are %d\n", i+1,marks[i]);
    }
    return 0;
}
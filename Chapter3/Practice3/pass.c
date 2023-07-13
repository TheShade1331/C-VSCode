//To Check if a Student is Passed: Each Sub more than 33, total more than 40%
//Fully Done by ME!!
#include<stdio.h>
int main()
{
    int sub1, sub2, sub3;
    printf("Enter Marks in Subject-1:\n");
    scanf("%d", &sub1);
    printf("Enter Marks in Subject-2:\n");
    scanf("%d", &sub2);
    printf("Enter Marks in Subject-3:\n");
    scanf("%d", &sub3);
    float total = sub1+sub2+sub3;
    float percentage = total/3;
    if (sub1<=33 && sub2<=33 && sub3<=33 && total<=40)
    {
        printf("Your Total Percentage is %f & You are Failed\nShame!",percentage);
    }
    else
    {
        printf("Your Total Percentage is %f & You are Passed!\nCongratulations!!",percentage);
    }
    return 0;
}
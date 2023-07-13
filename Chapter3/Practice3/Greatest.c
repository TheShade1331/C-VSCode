// Write a Program to find greatest of four numbers entered by the User
//Fully Done by ME!!
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter First Number:\n");
    scanf("%d",&a);
    printf("Enter Second Number:\n");
    scanf("%d",&b);
    printf("Enter Third Number:\n");
    scanf("%d",&c);
    printf("Enter Fourth Number:\n");
    scanf("%d",&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("The Greatest of 'em all is %d",a);
            }
            else
            {
                printf("The Greatest of 'em all is %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("The Greatest of 'em all is %d",c);
            }
            else
            {
                printf("The Greatest of 'em all is %d",d);
            }
        }
    }
    else
    if(b>c)
        {
            if(b>d)
            {
                printf("The Greatest of 'em all is %d",a);
            }
            else
            {
                printf("The Greatest of 'em all is %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("The Greatest of 'em all is %d",c);
            }
            else
            {
                printf("The Greatest of 'em all is %d",d);
            }
        }

    return 0;
}
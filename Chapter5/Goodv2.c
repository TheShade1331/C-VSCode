//Direct & Indirect Calling of Functions
#include<stdio.h>
void morning();
void noon();
void night();
int main()
{
    morning();
    return 0;
}
void morning()
{
    printf("Good Morning Sagar!\n");
    noon();
}
void noon()
{
    printf("Good Afternoon Sagar!\n");
    night();
}
void night()
{
    printf("Good Night Sagar!\n");
}
#include<stdio.h>
#include<string.h>
int main()
{
    char *S = "SAGAR";
    char T[] = {'S','A','G','A','R','\0'};
    int val = strcmp(S,T);
    if(val == 0)
    printf("The Strings are Equal");
    else
    printf("The Strings NOT are Equal");
    return 0;
}
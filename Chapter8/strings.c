#include<stdio.h>
int main()
{
    char S[] = {'S','A','G','A','R','\0'};
    char T[] = "SAGAR";
    char *ptr = T;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
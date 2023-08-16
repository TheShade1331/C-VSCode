#include<stdio.h>
int stringlength(char *st);
int main()
{
    char st[] = "Sagar";
    int l = stringlength(st);
    printf("The Length of the String is %d",l);
    return 0;
}
int stringlength(char *st)
{
    char *ptr = st;
    int len = 0;
    while(*ptr != 0){
        len++;
        ptr++;
    }
    return len;
}

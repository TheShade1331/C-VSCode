#include<stdio.h>
// #include<string.h>
int main()
{
    char *ptr = "Engineering";
    int len=0;
    printf("You Entered: ");
    while(*ptr !='\0'){
        printf("%c",*ptr);
        len++;
        ptr++;
    }
    printf("\nAnd the Length of String is %d",len);
    return 0;
}
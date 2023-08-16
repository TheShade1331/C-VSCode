#include<stdio.h>
int Occurence(char *c, char a);
int main()
{
    char A[] = "come to me..embress my tears..let me guide you down into my soul";
    char c = 'i';
    int B = Occurence(A,c);
    printf("Number of Time %c has Occured is %d",c,B);
    return 0;
}
int Occurence(char *c, char a)
{
    int count = 0;
    char *ptr = c;
    while(*ptr!='\0'){
        if(a == *ptr)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
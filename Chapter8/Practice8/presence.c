#include<stdio.h>
int Occurence(char *c, char a);
int main()
{
    char A[] = "come to me..embress my tears..let me guide you down into my soul";
    char c = 'x';
    int B = Occurence(A,c);
    // printf("Number of Time %c has Occured is %d",c,B);
    if(B==0)
    {
        printf("Entered Character is Not Present in the String");
    }
    else
    {
        printf("Entered Character IS present in the String & it has Occured %d number of Times!",B);
    }
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
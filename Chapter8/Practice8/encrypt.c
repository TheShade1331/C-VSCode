#include<stdio.h>
void encrypt(char *c);
int main()
{
    char c[] = "Come to Me..Embress My Tears..Let Me Guide You Down into My Soul!";
    encrypt(c);
    printf("Encrypted String is: %s",c);
    return 0;
}
void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}

#include<stdio.h>
void decrypt(char *c);
int main()
{
    char c[] = "Dpnf!up!Nf//Fncsftt!Nz!Ufbst//Mfu!Nf!Hvjef!Zpv!Epxo!joup!Nz!Tpvm";
    decrypt(c);
    printf("Decrypted String is: %s",c);
    return 0;
}
void decrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}
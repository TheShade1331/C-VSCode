#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("prf1.txt","r");
    char c;
    // c = fgetc(ptr);
    for(int i=0; i<3; i++){
        c = fgetc(ptr);
        printf("%c",c);
    }
    fclose(ptr);
    return 0;
}
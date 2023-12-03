#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Notepad.txt","r");
    char ch;
    while(1){
        ch = fgetc(ptr);
        printf("%c",ch);
        if(ch == EOF){
            break;
        }
    }
    return 0;
}
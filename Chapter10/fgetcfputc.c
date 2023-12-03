 // fgetc demo for reading a File
#include<stdio.h>
int main()
{
    FILE *ptr;
    // ptr = fopen("getcdemo.txt","r");
    // char c = fgetc(ptr-1);
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));

    ptr = fopen("putcdemo.txt","w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}
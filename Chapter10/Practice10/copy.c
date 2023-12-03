#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("prf2.txt","r");

    FILE *ptr2;
    ptr2 = fopen("prf3.txt","w");

    char c;
    while((c = fgetc(ptr))!= EOF){
        fputc(c, ptr2);
    }
    fprintf(ptr2, "\n");
    fseek(ptr, 0, SEEK_SET);
    while((c = fgetc(ptr))!= EOF){
        fputc(c, ptr2);
    }
    fclose(ptr2);
    fclose(ptr);
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Notepad2.txt","r");
    if (ptr == NULL){
        printf("File Does Not Exist");
    }
    else {
        fscanf(ptr, "%d", &num);                // File Will Read a Word at a Time & The Number of Times Scanf is Used
        fscanf(ptr, "%d", &num2);
        fclose(ptr);               // it will read the Further Word/Number in the File.
        printf("The Value of Num is %d\n",num);
        printf("The Value of Num2is %d",num2);
    }
    return 0;
}
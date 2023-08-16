#include<stdio.h>
// #include<string.h>
int main()
{
    char B[] = "Engineering";
    char A[20];
    int i = 0;
    do{
        A[i] = B[i];
        i++;
    }while(B[i]!='\0');
    A[i] = '\0'; 
    printf("The String A is %s",A);
    return 0;
}
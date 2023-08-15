#include<stdio.h>
int main()
{
    char S[] = {'S','A','G','A','R','\0'};
    char T[] = "SAGAR";
    char U[] = "Convenient Method to Print Strings";
    char *ptr = T;
    char *A = S;
    char *ez = U;
    while(*ptr!='\0'){
        printf("%c",*ptr);    // String Intialised by Characters // While Loops
        ptr++;
    }
    printf("\n");
    while(*A!='\0'){         // String Intialised by Whole Words  //While Loops
        printf("%c",*A);
        A++;
    }
    printf("\n");
    printf("%s",ez);         // Using %s
    return 0;
}
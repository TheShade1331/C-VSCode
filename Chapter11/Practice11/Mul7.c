#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int number;
    printf("***Multiplication Calculator***\n");
    printf("Enter the Number:");
    scanf("%d",&number);
    int newmul;
    int mul = 10;
    ptr = (int *)malloc(mul * sizeof(int));
    printf("The Multiplication Table of %d upto %dth Multiple\n",number,mul);
    for(int i=0; i<mul; i++){
        printf("%d x %d = %d\n",number,i+1,number*(i+1));
    }
    //Reallocating the Memory!!
    printf("Enter a New Level of Multiplication\n");
    scanf("%d",&mul);
    ptr = (int *)realloc(ptr, mul*sizeof(int));
    printf("The Multiplication Table of %d upto %dth Multiple\n",number,newmul);
    for(int i=0; i<mul; i++){
        printf("%d x %d = %d\n",number,i+1,number*(i+1));
    }
    free(ptr);
    return 0;
}

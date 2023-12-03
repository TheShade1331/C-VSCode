#include<stdio.h>
int main()
{
    int Num = 21;
    FILE *ptr;
    ptr = fopen("prf2.txt","w");
    fprintf(ptr,"Multiplication Table of %d\n",Num);
    for(int i = 1; i<=10; i++){
        fprintf(ptr,"%d x %d = %d\n",Num,i,Num*(i));
    }
    fclose(ptr);
    return 0;
}
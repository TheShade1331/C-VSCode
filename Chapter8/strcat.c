#include<stdio.h>
#include<string.h>
int main()
{
    char st1[45] = "Hello";
    char *st2 = "Sagar";
    strcat(st1,st2);
    printf("Now st1 is %s\n",st1);

    int val = strcmp(st1,st2);
    printf("Val is %d\n",val);
    return 0;
}
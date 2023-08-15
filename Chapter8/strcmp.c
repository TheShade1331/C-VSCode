#include<stdio.h>
#include<string.h>
int main()
{
    char st1[45] = "Hello";
    char *st2 = "Sagar";
    char *st3 = "Sagar";
    int val = strcmp(st1,st2);         // H < S => -1
    int val2 = strcmp(st2,st3);        // strings are equal => 0
    int val3 = strcmp(st2,st1);        // S > H => 1
    printf("Val is %d\n",val);
    printf("Val2 is %d\n",val2);
    printf("Val3 is %d\n",val3);
    return 0;
}
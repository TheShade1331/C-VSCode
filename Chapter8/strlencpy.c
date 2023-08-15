#include<stdio.h>
#include<string.h>
int main()
{
    char *st = "Sagar";
    int a = strlen(st);
    printf("The Length of String st is %d\n",a);

    char *st1 = "Kanekar";
    char st2[45];
    strcpy(st2,st);
    printf("Now the st2 is %s\n",st2);

    return 0;
}
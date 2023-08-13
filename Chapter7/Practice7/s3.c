#include<stdio.h>
int main()
{
    int S[3] = {1,2,3};
    int *s = S;
    if((s+2) == &S[2])
    {
        printf("These Points point to the Same Location in Memory\n");
    }
    else
    {
        printf("These Points point to the Different Location in Memory\n");
    }
    return 0;
}
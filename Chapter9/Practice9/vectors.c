#include<stdio.h>
typedef struct vector{
    float i;
    float j;
}V;
void show (V e)
{
    printf("i co-ordinate is %.2f\n",e.i);
    printf("j co-ordinate is %.2f\n",e.j);
    printf("Hence Vector is %.2f i %.2f j",e.i,e.j);
}
int main()
{
    V v1;
    V *ptr;
    ptr = &v1;
    ptr->i = 2.4;
    ptr->j = -3.6;
    show(v1);
    return 0;
}
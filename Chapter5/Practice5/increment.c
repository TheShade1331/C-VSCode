#include<stdio.h>
int main()
{
    int a, b, c;
    a = b = c = 1;
    printf("%d %d %d\n",a, ++a, a++);
    printf("%d %d %d\n",++b, b, b++);
    printf("%d %d %d\n",++c, c++, c);
    return 0;
}
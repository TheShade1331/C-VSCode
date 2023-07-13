#include<stdio.h>
int oshi(int n);
int main()
{
    int n;
    printf("Enter Value of N:\n");
    scanf("%d", &n);
    oshi(n);
    return 0;
}
int oshi(int n)
{                                                  //Number of rows is n
    int b;                                         // So For Loop for Getting Each row & \n to Next Line
    for(int x = 1; x<=n ; x++)                     // Now in Each row Number of Elements = b = 2*x - 1
    {                                              // Where x = row number
       b = 2*x - 1;                                // & For Printing those b elements another for loop
       for(int a = 1 ; a<=b ; a++)                 // Which runs from 1 to b
       {                                           // & that's it! Job Done!!
           printf("* ");                           // I Wrote this By Myself, Step By Step!!
       }                                           // Very Proud!!!
       printf("\n");
    }
}

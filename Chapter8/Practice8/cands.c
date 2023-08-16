#include<stdio.h>
#include<string.h>
int main()
{
    char C[100];
    char D[100];
    char c;
    int i=0;

    printf("Enter the Value of First String:\n");  //Normal String Input by %s
    scanf("%s",C);

    printf("Enter the Value of Second String Character by Character\n"); //Chracter wise Input by %c
    while(c!='\n')                          //Here the Only way to detect the end of String from User
    {                                       // is the Enter key after the End of Word
        fflush(stdin);                      
        scanf("%c", &c);                    // But As We know, while taking scanf in loops
        D[i] = c;                           // Every Scanf is Taken on a New Line.
        i++;                                // Hence the Error of Loop detecting that next line as
    }                                       // the Enter key Occurs.
    D[i-1]='\0';                            // To Avoid that Error, We use fflush(stdin);
    printf("The Value of C is %s\n",C);     // It Completely Clears Std input & hence Loop can be Safely Used.
    printf("The Value of D is %s\n",D);
    int val = strcmp(C,D);                  //Also line 21's Significance is to replace the \n which was the
    if(val == 0)                            //last entered character in 2nd string with Null char.
    { 
        printf("The Strings are Equal");
    }                                       //strcmp to check the Strings comparison.
    else                                    //line 21 adjustment finally prepares two strings for
    {                                       //Real Comparison
        printf("The Strings NOT are Equal");
        printf("%d",val);
    }
    return 0;
}
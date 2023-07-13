#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand()%100 + 1;// Generates a random Number between 1 to 100
    printf("The Number is %d\n", number);
    // keep running the Loop until Number is Guessed
    return 0;
}
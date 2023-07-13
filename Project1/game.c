#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, n=1;
    srand(time(0));
    number = rand()%100 + 1;// Generates a random Number between 1 to 100
    //printf("The Number is %d\n", number);
    // keep running the Loop until Number is Guessed
    do{
        printf("Guess the Number between 1 & 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("Your Number is:%d\n", guess);
            printf("You Guessed it in %d Attempts", n);
        }
        n++;
    } while(guess!= number);
    return 0;
}
#include<stdio.h>
#include<time.h>

int RPS(char you,char comp){
    //returns 1 if you win, -1 if you lose & 0 if Draw.
    // Draw Conditions
    if(you == comp){
        return 0;
    }

    // Result Conditions
    if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }

    if(you=='s' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='s'){
        return -1;
    }

    if(you=='p' && comp=='r'){
        return 1;
    }
    else if(you=='r' && comp=='p'){
        return -1;
    }

}

int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand()%100 + 1; // Generates a Random Number Between 1 to 100.
    if (number<34){
        comp = 'r';
    }
    if (34 <= number && number< 67){
        comp = 'p';
    }
    if (67 <= number && number <= 100){
        comp = 's';
    }
    // comp = 'r';                                       For Testing Cases 
    printf("Welcome to Rock Paper Scissors!!\n");
    printf("Enter 'r' for Rock\n");
    printf("Enter 'p' for Paper\n");
    printf("Enter 's' for Scissors\n");
    scanf("%c",&you);
    getchar();
    int result = RPS(you,comp);
    printf("You chose '%c' & Computer Chose '%c'",you,comp);
    if(result == 0){
        printf("\nGAME DRAW");
    }
    if(result == 1){
        printf("\nYOU WIN!");
    }
    if(result == -1){
        printf("\nYOU LOSE");
    }
    return 0;
}
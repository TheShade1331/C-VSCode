#include<stdio.h>
#include<string.h>
typedef struct ChessOlympiad{
    char name[20];
    char country[20];
    int rating;
}FIDE;
int Details(FIDE*Player);
void show (FIDE*Player);
int main()
{
    FIDE SF[4];
    for(int i=0; i<4; i++){
        Details(&SF[i]);
    }
    for(int j=0; j<4; j++){
        show(&SF[j]);
    }
    return 0;
}
int Details(FIDE*Player)
{
    printf("\nName:\n");
    scanf("%s", &(Player->name));
    printf("Country:\n");
    scanf("%s", &(Player->country));
    printf("Rating:\n");
    scanf("%d", &(Player->rating));
}
void show (FIDE*Player)
{
    printf("\nName: %s\n",Player->name);
    printf("Country: %s\n",Player->country);
    printf("Rating: %d\n",Player->rating);
} 
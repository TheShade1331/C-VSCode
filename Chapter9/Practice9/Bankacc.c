#include<stdio.h>
typedef struct BankAccount{
    int Acc_Number;
    char Name[20];
    int Balance;
    int Opening_Year;
}Acc;
int main()
{
    Acc People[3];
    for(int i=0; i<3; i++){
        printf("\nPerson No:%d\n:",i+1);
        Details(&People[i]);
    }
    for(int j=0; j<3; j++){
        printf("\nPerson No:%d\n:",j+1);
        show(&People[j]);
    }
    return 0;
}
int Details(Acc *People)
{
    printf("Account Number:\n");
    scanf("%d", &(People->Acc_Number));
    printf("Name:\n");
    scanf("%s", &(People->Name));
    printf("Account Balance:\n");
    scanf("%d", &(People->Balance));
    printf("Year of Account Opening:\n");
    scanf("%d", &(People->Opening_Year));
}
void show (Acc *People)
{
    printf("Account Number\n:%d\n",People->Acc_Number);
    printf("Name:%s\n",People->Name);
    printf("Account Balance:%d\n",People->Balance);
    printf("Year of Account Opening:%d\n",People->Opening_Year);
}
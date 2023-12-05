#include<stdio.h>
#include<stdlib.h>
int main()
{
    float* ptr;
    // printf("The Size of Int on My PC is %d\n",sizeof(int));
    // printf("The Size of char on My PC is %d\n",sizeof(char));
    // printf("The Size of float on My PC is %d\n",sizeof(float));
    ptr = (float *)malloc(6 * sizeof(float));
    for(int i=1; i<6; i++){
        printf("Enter The Value of %d Element\n",i);
        scanf("%f", &ptr[i]);
    }
    for(int i=1; i<6; i++){
        printf("The Value of %d Element is %.2f\n",i,ptr[i]);
    }
    return 0;
}
// #include<stdio.h>
// void printArray(int *ptr, int n);
// int main()
// {
//     int arr[7] = {1,2,332,232,342,234,234};
//     printArray(arr,7);
//     return 0;
// }
// void printArray(int *ptr, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         printf("The Value of Element No. %d is %d\n",i+1,*(ptr+i));           //First method using Pointers
//     }
// }

#include<stdio.h>
void printArray(int ptr[], int n);
int main()
{
    int arr[7] = {1,2,332,232,342,234,234};
    printArray(arr,7);
    return 0;
}                                                                  // Second Method using Arrays
void printArray(int ptr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("The Value of Element No. %d is %d\n",i+1,ptr[i]);
    }
    ptr[2] = 5555;             // This value will be changed in main as well
}
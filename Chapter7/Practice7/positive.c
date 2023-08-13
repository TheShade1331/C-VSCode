#include<stdio.h>
int counter(int *arr, int n){
    int Count = 0;
    for(int i=0; i<(n); i++)
    {
        if(arr[i]>0)
        Count++;
        else
        continue;
    }
    return Count;
}
int main()
{
    int arr[] = {1,2,-3,-4,5,-6,7};
    int A = counter(arr,7);
    printf("Number of Positive Element in Array is %d",A);
    return 0;
}
#include<stdio.h>
int reverseArray(int A[],int n);
int main()
{
    int A[5]= {1,3,4,5,6};
    int n = 5;
    
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    reverseArray(A,n);
    
    printf("\nReversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

}
int reverseArray(int A[],int n)
{
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        // Swap elements at start and end indices
        int temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        // Move the pointers towards each other
        start++;
        end--;
    }
}
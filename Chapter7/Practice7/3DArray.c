#include<stdio.h>
int main()
{
    int A[2][3][2];//= {{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}};
    int *ptr = &A[0][0][0];
    for( int i =0; i<2; i++)
    {
      for( int j =0; j<3; j++)
      {
        for( int k =0; k<2; k++)
        {
            printf("Element no %d in row %d & Column %d:",i+1,j+1,k+1);
            scanf("%d",&A[i][j][k]);
        }
      }
    }

    for( int i =0; i<3; i++)
    {
      for( int j =0; j<4; j++)
      {
        for( int k =0; k<4; k++)
        {
            printf("Value of Pointer is: %d\n",ptr);
            ptr++;
        }
      }
    }
    return 0;
}
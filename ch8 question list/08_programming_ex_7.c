/*
Two matrices that have the same number of rows and columns can be multiplied to produce a third
matrix. Consider the following two matrices.
     a11 a12........a1n
     a12 a22........a2n
A =  .
     .
     .
     an1............ann

    b11 b12.........b1n
    b12 b22.........b2n
B = .
    .
    .
    bn1.............bnn
The product of A and B is a third matrix C of size nxn where each element of C is given by the
following equation.
                        Cij n(sigma)k=1 = aik bkj
Write a program that will read the values of elements of A and B and produce the product matrix
C.
*/
#include<stdio.h>

int main(){
    int size;
    printf("Enter the size of the matrix\n");
    scanf("%d",&size);
    int A[size][size],B[size][size],C[size][size];
    for (int row = 0; row < size; row++)
    {
        for (int column = 0; column < size; column++)
        {
            printf("Enter A[%d][%d]\n",row,column);
            scanf("%d",&A[row][column]);
        }
        
    }
    for (int row = 0; row < size; row++)
    {
        for (int column = 0; column < size; column++)
        {
            printf("Enter B[%d][%d]\n",row,column);
            scanf("%d",&B[row][column]);
        }
        
    }
for (int row = 0; row < size; row++)
{
    for (int column = 0; column < size; column++)
    {
        C[row][column]=0;
    }
    
}
for (int row = 0; row < size; row++)
{
    for (int column = 0; column < size; column++)
    {
        for (int k = 0; k < size; k++)
        {
            C[row][column] += A[row][k]*B[k][column];
        }
        
        printf("%d ",C[row][column]);
    }
    printf("\n");
}
   
    return 0;
}
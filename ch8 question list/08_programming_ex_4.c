/*
The following set of numbers is popularly known as Pascal's triangle.
1
1       1
1       2       1
1       3       3       1
1       4       6       4       1
1       5       10      10      5       1
-       -       -       -       -       -       -
-       -       -       -       -       -       -       -
If we denote rows by i and columns by j, then any element (except the boundary elements) in the triangle is given by
pij = pi-1,j-1 + pi-1,j
Write a program to calculate the elements of the Pascal triangle for 10 rows and print the results.
*/
#include<stdio.h>

int main(){
    int element[10][10];
    for (int row = 0; row < 10; row++)
    {
        for (int column = 0; column <= row; column++)
        {
            if(column==0 || column==row){
                element[row][column]=1;
                printf("%d\t\t",1);
            }
            else{
                element[row][column]=element[row-1][column-1] + element[row-1][column];
                printf("%d\t\t",element[row][column]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
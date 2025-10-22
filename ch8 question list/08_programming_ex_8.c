/*
Write a program that fills a five-by-five matrix as follows:
-> Upper left triangle with +1s
-> Lower right triangle with -1s
-> Right to left diagonal with zeroes
Display the contents of the matrix using not more than two printf stataments.
*/
#include<stdio.h>

int main(){
    int size = 5;
    int matrix[size][size];
    printf("We are printing a matrix of order size\n");
    for (int row = 0; row < size; row++)
    {
        for (int column = 0; column < size; column++)
        {
            if(row+column < size - 1){
                matrix[row][column] = 1;
            }
           else if(row+column == size - 1){
                matrix[row][column] = 0;
            }
            else if(row+column > size - 1){
                matrix[row][column] = -1;
            }
            printf("%d\t",matrix[row][column]);
        }
        printf("\n");
        
        
    }
    
    return 0;

}
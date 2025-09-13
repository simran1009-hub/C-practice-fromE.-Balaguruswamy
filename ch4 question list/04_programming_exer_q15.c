/*
Write a program to compute the values of square-roots and squares of the numbers 0 to 100 in steps 10 and print the output in a tabular form
as shown below:
*/
#include<stdio.h>
#include<math.h>

int main(){
    printf("Number\t\tSquare-root\tSquare\n");
    for (int n = 0; n <= 100; n += 10)
    {
        printf("%d\t\t%.2f\t\t%d\n",n,sqrt(n),(n*n));
    }
    
    return 0;
}
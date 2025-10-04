/*
Shown below is a Floyd's triangle.
1
2 3
4 5 6
7 8 9 10
11 .. .. .. 15
.
.
79 .. .. .. .. .. .. 91
(b) Modify the program to produce the following form of Floyd's triangle.
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>

int main(){
    int no_of_rows=5;
    for (int i = 1; i <= no_of_rows; i++)
    {
        int bit=(i%2==0)? 0: 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",bit);
            bit = 1- bit;
        }
        printf("\n");
    }
    
    return 0;
}
    

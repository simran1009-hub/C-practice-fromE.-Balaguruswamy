/*
Write a program to print a two-dimensional Square Root Table as shown below, to provide the square root of any number 
from 0 to 9.9. For example, the value x will give the square root of 3.2 and y the square root of 3.9.
                                        Square Root Table(*in italic)
Number          0.0             0.1             0.2                 ........                0.9
0.0
1.0
2.0
3.0
9.0                                             x                                              y
*/
#include<stdio.h>
#include<math.h>

int main(){
    printf("\t\t\t\t\t\t\t\tSquare Root Table\n\n");      
    printf("Number\t\t");
    
double whole_number[10]={0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};

for (int i = 0; i < 10; i++)
{
    printf("%.1f\t\t",i/10.0);
}
printf("\n");
for (int i = 0; i < 10; i++)
{
    printf("%.1f\t\t",whole_number[i]);
    for (int j = 0; j < 10; j++)
    {
        printf("%.2f\t\t",sqrt(whole_number[i]+(j/10.0)));
    }
    printf("\n");
}
    return 0;
}
/*
Write a program to print a table of values of the function
    y = exp (-x)
    for x varying from 0.0 to 10.0 in steps of 0.10. The table should appear as follows:
                                            Table for Y = EXP(-X)
x           0.1         0.2         0.3         ..............              0.9
0.0
1.0
2.0
3.0
.
.
.
9.0
*/
#include<stdio.h>
#include<math.h>


int main(){
    printf("\t\t\t\t\t\t\t\tTable for Y = EXP(-X)\n\n");
    printf("x\t\t");
    for (float start_fr= 0.1; start_fr <= 0.9; start_fr += 0.1)
    { 
        printf("%.1f\t\t", start_fr); 
    }
    printf("\n\n");
   for (float start_wh =0.0; start_wh <= 9.0; start_wh += 1.0)
   {
     printf("%.1f\t\t",start_wh);
     
     for (float start_fr = 0.1; start_fr <= 0.9; start_fr += 0.1)
     {
        printf("%.4f\t\t",exp(-(start_fr+start_wh)));
     }
     printf("\n"); 
   }
   return 0;
}
/*
Write programs to evaluate the following functions to 0.0001% accuracy.
(c) SUM = 1 + (1/2)^2 + (1/3)^3 + (1/4)^4 + ... ...
*/
#include<stdio.h>
#include<math.h>

int main(){
    double SUM=0,terms;
    int i=1;
    while(1){
        terms=pow((1.0/i),i);
        if((fabs(terms))<0.000001){
            break;
        }
        SUM += terms;
        i++;
    }
    printf("SUM = %.2f\n",SUM);
    return 0;
}
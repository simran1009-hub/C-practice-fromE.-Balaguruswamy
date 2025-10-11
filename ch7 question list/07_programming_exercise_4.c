/*
Write a program to evaluate the following investment equation
V = P(1+r)^n
and print the tables which would give the values of V for various combination of the following values of P, r, and n.
P : 1000, 2000, 3000,........, 10,000
r : 0.10, 0.11, 0.12, ....., 0.20
n : 1, 2, 3, ....., 10
(Hint: P is the principal amount and V is the value of money at the end of n years. This equation can be recursively
written as 
    V = P(1+r)
    P = V
That is, the value of money at the end of first year becomes the principal amount for the next year and so on.)
*/
#include<stdio.h>

int main(){
   float V,P_;
    for (float r = 0.10; r <= 0.20; r += 0.01)
    {
        for (float P = 1000; P <= 10000; P += 1000 )
        {
            P_=P;
        for (int n = 1; n <= 10; n++)
        {
            V = P*(1+r);
                printf("For r = %.2f, P = %.2f and n = %d the value of V = %.2f\n",r,P_,n,V);
                P = V;
            }
            
            printf("\n");
            P=P_;
        }
        printf("\n");
        
    }
    
    
    return 0;
}
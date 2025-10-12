/*
Write programs to evaluate the following functions to 0.0001% accuracy.
(b) cosx = 1 - x^2/2! + x^4/4! -x^6/6! + ......
*/
#include<stdio.h>

int factorial(int);

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return ((factorial(n-1))*n);
}
int main(){
    float x,exp;
    printf("Enter x\n");
    scanf("%f",&x);
    double cosx=0,factorial_,terms;
    int i=0,i_;
    while(1){

        exp=pow(x,i_),i_=2*i,factorial_=factorial(i_),terms=(exp/factorial_);
        
        if(i%2==0){
        cosx += terms;
        }
        else if(i%2!=0){
            cosx -= terms;
        }
        if(fabs(terms) < 0.000001){
            break;
        }
        i++;
    }
    printf("cos(%.2f) = %.2f\n",x,cosx);
    return 0;
}
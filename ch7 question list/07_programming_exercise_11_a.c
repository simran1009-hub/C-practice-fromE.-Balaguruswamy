/*
Write programs to evaluate the following functions to 0.0001% accuracy.
(a) sinx = x - x^3/3! + x^5/5! - x^7/7! + ......
*/
#include<stdio.h>
#include<math.h>
int factorial(int);

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return ((factorial(n-1))*n);
}
int main(){
    printf("We're calculating the value of sinx, so enter the value of x\n");
    double x,sinx=0,exp,factorial_;
    scanf("%lf",&x);
   int i=1,i_;
    while(1){
        i_=((2*i)-1), exp=(pow(x,i_)),factorial_=factorial(i_);
       ;
        if(i%2==0){
       sinx -= (exp/factorial_);
        }
        else if(i%2!=0){
            sinx +=(exp/factorial_);
        }
        if(fabs(exp/factorial_) < 0.000001){
            break;
        }
        i++;
    }
    printf("sin(%.2f) = %.2f\n",x,sinx);
    return 0;
}
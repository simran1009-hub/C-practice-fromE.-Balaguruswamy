//Q.Write a function to calculate nCr (combination) using functions.
#include<stdio.h>
int factorial(int);

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return (factorial(n-1)*n);
}
int nCr(int,int);

int nCr(int n,int r){
    return ((factorial(n))/((factorial(r))*(factorial(n-r))));
}
int main(){
    int n,r;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the value of r\n");
    scanf("%d",&r);
    printf("The value of %dC%d is %d\n",n,r,nCr(n,r));
    return 0;
}
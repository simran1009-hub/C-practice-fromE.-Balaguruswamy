//Q.Write a function to calculate the sum of first n natural numbers using recursion.
#include<stdio.h>
int sum_of_n_natural_numbers(int);

int sum_of_n_natural_numbers(int n){
    if(n==0){
        return 0;
    }
        if(n==1){
        return 1;
    }
    return (n + sum_of_n_natural_numbers(n-1));
}
int main(){
    int n;
    printf("Enter n, we will calculate the sum of first n natural numbers\n");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d\n",n,sum_of_n_natural_numbers(n));
   
    return 0;
}
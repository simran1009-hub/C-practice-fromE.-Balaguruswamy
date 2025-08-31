//Q>Write a function to find the factorial of a number using recursion.
#include<stdio.h>

int factorial(int);

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    return ((factorial(num-1))*num);
}
int main(){
    int num;
    printf("Enter the number whose factorial is to be computed\n");
    scanf("%d",&num);
printf("The factorial of %d is %d\n",num,factorial(num));
return 0;
}
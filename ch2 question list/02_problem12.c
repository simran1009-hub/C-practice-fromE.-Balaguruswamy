//Q. Write a program to check whether a number is even or odd using modulus operator.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number which has to be checked for even or odd\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even\n",n);
    }
    else{
        printf("%d is odd\n",n);
    }
    return 0;
}
/*
Write a program to read two integer values m and n and to decide and print whether m is a multiple of n.
*/
#include<stdio.h>

int main(){
    int m, n;
    printf("Enter m n, we will decide and print whether m is a multiple of n or not\n");
    scanf("%d %d",&m,&n);
    if(n==0){
        printf("n cannot be zero\n");
    }
    else if(m % n == 0){
        printf("%d is a multiple of %d\n",m,n);
    }
    else{
        printf("%d is not a multiple of %d\n",m,n);
    }
    return 0;
}
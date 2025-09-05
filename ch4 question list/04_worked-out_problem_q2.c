/*
Print a sequence of squares of numbers. Note the use of the shorthand operator *=.2
*/
#include<stdio.h>

int main(){
    int n,N;
    printf("Enter n N, we will print the square of n, and keep updating the value of n with the result n equals N\n");
    scanf("%d %d",&n,&N);
    while(n<N){
        printf("%d\n",n);
        n *= n;
    }
    return 0;
}
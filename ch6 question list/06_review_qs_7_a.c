/*
Simplify the followingn compoumd logical expressions
(a) !(x<=10)
*/
#include<stdio.h>

int main(){
    int x;
    printf("Enter x\n");
    scanf("%d",&x);
    if(x>10){                                                               //"!" is the "NOT" logical operator, "!(x<=10)", means "the input should neither be less than nor equal to 10 for the statement to hold true".So, it simply implies that the value must be greater than 10. 
        printf("The compound logical expression has been simplified\n");
    }
    return 0;
}
